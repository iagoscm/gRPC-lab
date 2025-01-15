#include <httplib.h>
#include <grpcpp/grpcpp.h>
#include "dictionary.grpc.pb.h"

std::shared_ptr<dictionary::DictionaryService::Stub> GetStub() {
    return dictionary::DictionaryService::NewStub(
        grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));
}

void HandleAdd(const httplib::Request& req, httplib::Response& res) {
    auto stub = GetStub();

    if (req.has_param("word")) {
        dictionary::WordRequest request;
        request.set_word(req.get_param_value("word"));

        dictionary::WordResponse response;
        grpc::ClientContext context;

        auto status = stub->ProcessWord(&context, request, &response);
        if (status.ok()) {
            res.set_content("Word added.", "text/plain");
        } else {
            res.status = 500;
            res.set_content("Error: " + status.error_message(), "text/plain");
        }
    } else {
        res.status = 400;
        res.set_content("Missing 'word' parameter.", "text/plain");
    }
}

void HandlePrint(const httplib::Request& req, httplib::Response& res) {
    auto stub = GetStub();

    dictionary::WordRequest request;
    request.set_word("IMPRIMIR");

    dictionary::WordResponse response;
    grpc::ClientContext context;

    auto status = stub->ProcessWord(&context, request, &response);
    if (status.ok()) {
        std::string output;
        for (const auto& word_entry : response.words()) {
            output += word_entry.word() + ": " + std::to_string(word_entry.count()) + "\n";
        }
        res.set_content(output, "text/plain");
    } else {
        res.status = 500;
        res.set_content("Error: " + status.error_message(), "text/plain");
    }
}

int main() {
    httplib::Server svr;

    svr.Get("/add", HandleAdd);
    svr.Get("/print", HandlePrint);

    std::cout << "Web server listening on http://localhost:8080" << std::endl;
    svr.listen("0.0.0.0", 8080);

    return 0;
}
