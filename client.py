import grpc
import dictionary_pb2
import dictionary_pb2_grpc

def run_client(mode, word=None):
    with grpc.insecure_channel('localhost:50051') as channel:
        stub = dictionary_pb2_grpc.DictionaryServiceStub(channel)

        if mode == "inclusao":
            response = stub.UpdateWord(dictionary_pb2.WordRequest(word=word))
            print(response.message)
        elif mode == "consulta":
            response = stub.GetDictionary(dictionary_pb2.Empty())
            for word_count in response.words:
                print(f"{word_count.word}: {word_count.count}")

if __name__ == "__main__":
    import sys
    mode = sys.argv[1]
    word = sys.argv[2] if len(sys.argv) > 2 else None
    run_client(mode, word)

