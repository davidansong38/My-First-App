class SERVER__SOCKET:
  def __init__(self):
     self.__server_response = "Processing request....."
     self.__server_error_message = "HTTP/version 1.1.0.1 - 404/ERROR"
     self.__server_success_message = "HTTP/version 1.1.0.1 - 200/OK"
     self.__server_sucess_output_message = "Request successfully processed...."
     self.__server_error_output_message = "Request failed due to unreliable connection...."
     self.__server_ack_sucs = "Server responded successfully"
     self.__server_syn_sucs = "Thanks for your co-operation"
     """,__server_response,__server_error_message,_server_success_message,__server_sucess_output_message,__server_error_output_message,__server_ack_sucs,"""
     def server_resp(self):
      return self.__server_response

class CLIENT_SOC(SERVER__SOCKET):
    def __init__(self):
       SERVER__SOCKET.__init__(self)
       self.__client_request = "Sending request to http://www.dbacarcollections.ueuo.com....."
       self.__client_respond_to_usr = "Processing request....."
       self.__client_error_message = "HTTP/version 1.1.0.1 - 404/ERROR"
       self.__client_success_message = "HTTP/version 1.1.0.1 - 200/OK"
       self.__client_success_ = "Server finished processing request successfully..."
       self.__client_error_ = "Server failed to process request as a result of unknown error or failure in connection  _ERR_SYS_NID_SERVER_CLIENT_ID__"
       self.__client_syn_ack = "__SYN_ACK_12233KDIIEKKDS_K3993_CONNECT_SYSTEM__"
       """,__client_request,__client_respond_to_usr,       _client_error_message,__client_success_message,__client_success_,__client_error_,__client_syn_ack"""
    def getters_client(self, __client_req = ""):
           print("{}".format(self.__client_request))
    def write_req_to_file(self):
        return ("User Request :  "+ self.__client_success_message + "\n" + self.__client_syn_ack)
           

client_socket_connection = CLIENT_SOC()
client_socket_connection.getters_client()

save_req = open("user_server_request.bin", "w")

if save_req.write(client_socket_connection.write_req_to_file()) == True:
      save_req.close()
elif save_req.write(client_socket_connection.write_req_to_file()) == 255:
   print()
   __request = input()
   __request

