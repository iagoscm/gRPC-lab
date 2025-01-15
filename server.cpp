#include <iostream>
#include <string>
#include <unordered_map>
#include <grpcpp/grpcpp.h>
#include "dictionary.grpc.pb.h"

class DictionaryServiceImpl final : public DictionaryService::Service {
    std::unordered_map<std::string, int> dictionary;

    grpc::Status UpdateWord(grpc::ServerContext* context, const WordRequest* request, WordResponse* response) override {
        const std::string& word = request->word();
        if (word == "IMPRIMIR") {
            response->set_message("Use GetDictionary for fetching words.");
            return grpc::Status::OK;
        }

        dictionary[word]++;
        response->set_message("Word updated successfully.");
        return grpc::Status::OK;
    }

    grpc::Status GetDictionary(grpc::ServerContext* context, const Empty* request, DictionaryResponse* response) override {
        for (const auto& [word, count] : dictionary) {
            WordCount* entry = response->add_words();
            entry->set_word(word);
            entry->set_count(count);
        }
        return grpc::Status::OK;
    }
};

void RunServer() {
    std::string server_address("0.0.0.0:50051");
    DictionaryServiceImpl service;

    grpc::ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);

    std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;
    server->Wait();
}

int main() {
    RunServer();
    return 0;
}
