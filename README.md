# gRPC

protoc -I=. --grpc_out=. --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` dictionary.proto
protoc -I=. --cpp_out=. dictionary.proto


https://grpc.io/docs/languages/cpp/quickstart/


make -j 4
