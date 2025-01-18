#include "ServicoDicionario.h"

grpc::Status GerenciadorDicionario::AddPalavra(grpc::ServerContext* contexto, const dicionario::RequestPalavra* requisicao,
                                                dicionario::RespostaPalavra* resposta) {
    std::lock_guard<std::mutex> lock(mutex_);
    const std::string& palavra = requisicao->word();

    if (palavra == "IMPRIMIR") {
        resposta->set_message("Não é possível adicionar a palavra reservada 'IMPRIMIR'");
        return grpc::Status::OK;
    }

    dicionario_[palavra]++;
    resposta->set_message("Palavra adicionada com sucesso");
    return grpc::Status::OK;
}

grpc::Status GerenciadorDicionario::PrintaDicionario(grpc::ServerContext* contexto, const dicionario::PrintaRequest* requisicao,
                                                      dicionario::PrintaResposta* resposta) {
    std::lock_guard<std::mutex> lock(mutex_);
    auto* dic = resposta->mutable_dicionario();
    for (const auto& [palavra, ocorrencias] : dicionario_) {
        (*dic)[palavra] = ocorrencias;
    }
    return grpc::Status::OK;
}
