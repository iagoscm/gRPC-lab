#ifndef DICIONARIO_SERVICE_H
#define DICIONARIO_SERVICE_H

#include "dicionario.grpc.pb.h"
#include <unordered_map>
#include <string>
#include <mutex>

class GerenciadorDicionario final : public dicionario::DicionarioService::Service {
private:
    std::unordered_map<std::string, int> dicionario_;
    std::mutex mutex_;

public:
    grpc::Status AddPalavra(grpc::ServerContext* context, const dicionario::RequestPalavra* requisicao,
                                  dicionario::RespostaPalavra* resposta) override;

    grpc::Status PrintaDicionario(grpc::ServerContext* context, const dicionario::PrintaRequest* requisicao,
                                    dicionario::PrintaResposta* resposta) override;
};

#endif // SERVICO_DICIONARIO_H
