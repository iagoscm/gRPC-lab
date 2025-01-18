#include "ServicoDicionario.h"
#include <grpcpp/grpcpp.h>
#include <iostream>

void rodaServer()
{
	std::string endereco_servidor("0.0.0.0:50051");
	GerenciadorDicionario servico;

	grpc::ServerBuilder builder;
	builder.AddListeningPort(endereco_servidor, grpc::InsecureServerCredentials());
	builder.RegisterService(&servico);

	std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
	std::cout << "Servidor recebendo dados em " << endereco_servidor << std::endl;
	server->Wait();
}

int main(int argc, char** argv) {
	rodaServer();
 return 0;
}
