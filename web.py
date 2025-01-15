from flask import Flask, request, jsonify
import grpc
import dictionary_pb2
import dictionary_pb2_grpc

app = Flask(__name__)

def grpc_stub():
    channel = grpc.insecure_channel('localhost:50051')
    return dictionary_pb2_grpc.DictionaryServiceStub(channel)

@app.route('/add_word', methods=['POST'])
def add_word():
    data = request.json
    word = data['word']
    stub = grpc_stub()
    response = stub.UpdateWord(dictionary_pb2.WordRequest(word=word))
    return jsonify({'message': response.message})

@app.route('/get_dictionary', methods=['GET'])
def get_dictionary():
    stub = grpc_stub()
    response = stub.GetDictionary(dictionary_pb2.Empty())
    return jsonify({'words': [{'word': wc.word, 'count': wc.count} for wc in response.words]})

if __name__ == "__main__":
    app.run(port=8080)
