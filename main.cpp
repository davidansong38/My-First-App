#include"server_socket.h"
#include"commandline.h"


using namespace  std;

#define CHECK_CMD_ARGC printf

static const char *const cmd = "Please insert commandline argument on the commandline";

int __callback_main __codecl __stdcel __start_main(int argc, char* argv[]){
     unsigned n1, n2;

   if(argc == 1)
     THEN_OPEN
     
     CHECK_CMD_ARGC("%s", cmd);

     printf("%cEnter two values : ", '\n');
     scanf("%d%i", &n1, &n2);
     swap(n1, n2);
     THEN_CLOSE
    else if(argc == 2)
     cout<<"At least three(3) commandline arguments."<<endl;
    else
     std::cout<<"Valid Commandline argument."<<std::endl;
     goto get_out;
    
get_out:
   bool quite = false;
   goto exit;

exit:
  return 0x0000l;
}
