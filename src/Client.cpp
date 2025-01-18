#include "dicionario.grpc.pb.h"
#include <grpcpp/grpcpp.h>
#include <iostream>

void AddPalavra(const std::shared_ptr<dicionario::DicionarioService::Stub>& stub, const std::string& palavra) {
    dicionario::RequestPalavra requisicao;
    dicionario::RespostaPalavra resposta;
    grpc::ClientContext contexto;

    requisicao.set_word(palavra);
    grpc::Status status = stub->AddPalavra(&contexto, requisicao, &resposta);

    if (status.ok()) {
        std::cout << "Resposta do servidor: " << resposta.message() << std::endl;
    } else {
        std::cerr << "Erro: " << status.error_message() << std::endl;
    }


void ImprimirDicionario(const std::shared_ptr<dicionario::DicionarioService::Stub>& stub) {
    dicionario::PrintaRequest requisicao;
    dicionario::PrintaResposta resposta;
    grpc::ClientContext contexto;

    grpc::Status status = stub->PrintaDicionario(&contexto, requisicao, &resposta);

    if (status.ok()) {
        std::cout << "Conteúdo do dicionário:" << std::endl;
        for (const auto& [palavra, contador] : resposta.dicionario()) {
            std::cout << palavra << ": " << contador << std::endl;
        }
    } else {
        std::cerr << "Erro: " << status.error_message() << std::endl;
    }
}

int main(int argc, char** argv) {
    auto canal = grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials());
    auto stub = dicionario::DicionarioService::NewStub(canal);

    std::string comando, palavra;
    while (true) {
        std::cout << "Digite o comando (ADD <palavra> / PRINT / EXIT): ";
        std::cin >> comando;
        if (comando == "ADD") {
            std::cin >> palavra;
            AdicionarPalavra(stub, palavra);
        } else if (comando == "PRINT") {
            ImprimirDicionario(stub);
        } else if (comando == "EXIT") {
            break;
        } else {
            std::cout << "Comando desconhecido." << std::endl;
        }
    }

    return 0;
}
