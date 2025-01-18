cmake_minimum_required(VERSION 3.10)

project(grpc_dictionary)

find_package(Protobuf REQUIRED)
find_package(gRPC REQUIRED)

set(PROTO_DIR proto)
set(SRC_DIR src)
set(INCLUDE_DIR include)

set(PROTO_SRCS ${PROTO_DIR}/dicionario.pb.cc ${PROTO_DIR}/dicionario.grpc.pb.cc)

include_directories(${PROTO_DIR} ${INCLUDE_DIR})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_executable(server ${SRC_DIR}/Server.cpp ${SRC_DIR}/ServicoDicionario.cpp ${PROTO_SRCS})
target_link_libraries(server gRPC::grpc++ protobuf::libprotobuf)

add_executable(client ${SRC_DIR}/Client.cpp ${PROTO_SRCS})
target_link_libraries(client gRPC::grpc++ protobuf::libprotobuf)

