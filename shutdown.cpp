#ifndef __start_main
#include"sys"
#endif//

using namespace std;

typedef int int32_t;


static inline const void check_shutdown(char* = "", ...);

int32_t main(int argc, char* argv[]){
 try{
  static const char* const cmdline = "Please insert a commandline argument";
  static char cmd[40] = "At least two commandline argument\0";
  {
    if(argc < 2 | argc == 01){
       printf("%s", cmdline);
       goto out;
    }
    else if(argc == 2){
       printf("%s", cmd);
    }
    else{
     puts("Commandline argument are valid or accurate");
    }
  out:
    char shutdn = 0;
    std::cout<<"\nC:\"User\"HP> shutdown  ";
    scanf("%c", &shutdn);
    check_shutdown(&shutdn);
  }
  throw 40004;
}
catch(...){

}
  return 0x00;
}

const void check_shutdown(char* shut_check, ...){
    char empty = ' ';

    if(*shut_check == empty)
       cout<<"Enter any of the Listed objects(r,s,h,l)";
       scanf("%c",&(*shut_check));
     
  switch(*shut_check){
    case RESTART:
    case restart:
      puts("Shutdown will take only few seconds");
      puts("Shutdown completed....");
      printf("Restarting the computer......");
      break;
    case SHUTDOWN:
    case shutdown: 
      std::cout<<"Shutdown will take only few seconds..."<<std::endl;
      std::cout<<"Shutdown almost done....."<<endl;
      cout<<"Shutdown completed successfully"<<endl;
      break;
    default:
      return check_shutdown(shut_check);
  }
    
  return;
}
