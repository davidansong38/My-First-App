
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
        
def rec_req(recev_req = ""):
        #recev_req.close()
        return 255

def run_req(wrte = ""):      
       save_req = open("user_server_request.bin", "w")
       save_req.write(wrte)
       save_req.close()
       return 0

client_socket_connection = CLIENT_SOC()
client_socket_connection.getters_client()

rec_check = True

if rec_check == False:
    run_req(client_socket_connection.write_req_to_file())
elif rec_req() == 255:
   print("Select request status during processing....")
   print("@1.Request not sent.\n@2.Request sent successfully.\n@3.System not responding due to invalid input.")
   __request = ""
   __request = input("Enter your request response : ")
   if __request == 1:
     print("Please we're Kindly sorry for the interruption to the network connection. Please try re-connecting to the server. If this continue to be a problem to the connection, then please check or troubleshoot your network connection(such as router, switch, modem or network cables..Thank you. We're live because of you..#####")
   elif __request == 0x0002:
      print("Thank you for using our services. See you anytime..")
   elif __request == 0x000003:
      print("invalid input request. Please insert a valid input?")
      if __request == 0x000003:
          __request = input("Please Enter your status value again : ")
          while __request == 0x000003:
           print("invalid input request. Please insert a valid input?")
           ++__request
      else:
          print("No request made or Please enter a status during the processing of your request for further analysis and performance")
else:
    print("System not responding....")

south_africa = "South Africa"
Africa_Eco = list(("Ghana", "Gambia", "Nigeria", south_africa))
Africa_Eco.append("Libya")
print("Current Country : " + Africa_Eco[0x0001])

ghana_satellite_for_streets = ["Breya street", "Mukose street", "malam street", "Akoto street"]
print("Your current Location on Ghana's GPS : "+ ghana_satellite_for_streets[2])

current_tribes_in_ghana = dict(akans = 12, ewe = 9, muslims = 90)
current_ghana_economic_situation = {"education" : 91.2282003, "total_fund" : 81.028981, "social_security" : "Not safe", "total_results_on_ghana_sys" : "Not great or Poor"} 
print("Total output in Ghana's Economy : " + current_ghana_economic_situation["total_results_on_ghana_sys"])
