#include <iostream>
#include <string>
#include <grpcpp/grpcpp.h>
#include "dictionary.grpc.pb.h"

void AddWord(const std::string& word, std::shared_ptr<dictionary::DictionaryService::Stub> stub) {
    dictionary::WordRequest request;
    request.set_word(word);

    dictionary::WordResponse response;
    grpc::ClientContext context;

    grpc::Status status = stub->ProcessWord(&context, request, &response);
    if (!status.ok()) {
        std::cerr << "Error: " << status.error_message() << std::endl;
    }
}

void PrintDictionary(std::shared_ptr<dictionary::DictionaryService::Stub> stub) {
    dictionary::WordRequest request;
    request.set_word("IMPRIMIR");

    dictionary::WordResponse response;
    grpc::ClientContext context;

    grpc::Status status = stub->ProcessWord(&context, request, &response);
    if (status.ok()) {
        for (const auto& word_entry : response.words()) {
            std::cout << word_entry.word() << ": " << word_entry.count() << std::endl;
        }
    } else {
        std::cerr << "Error: " << status.error_message() << std::endl;
    }
}

int main(int argc, char** argv) {
    std::string target = "localhost:50051";
    auto channel = grpc::CreateChannel(target, grpc::InsecureChannelCredentials());
    auto stub = dictionary::DictionaryService::NewStub(channel);

    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <mode> [words...]" << std::endl;
        return 1;
    }

    std::string mode = argv[1];
    if (mode == "add" && argc > 2) {
        for (int i = 2; i < argc; ++i) {
            AddWord(argv[i], stub);
        }
    } else if (mode == "print") {
        PrintDictionary(stub);
    } else {
        std::cerr << "Invalid mode. Use 'add' or 'print'." << std::endl;
    }

    return 0;
}
