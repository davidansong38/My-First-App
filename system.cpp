#include"system.h"

class sleep_machine;

namespace std{
 namespace SLEEP_SYS{
  typedef struct __SLEEP_SYSTEM{
    private:
      std::string sys_sleep;
    public:
     __SLEEP_SYSTEM(string sys_sleep = "00:00:00")
      : sys_sleep(sys_sleep), sys_provider(new string(sys_sleep)){
         std::cout<<"Do you want the computer to shutdown. Yes or No. "<<std::endl;
      }
    protected:
     std::string *sys_provider;

    public: 
     virtual ~__SLEEP_SYSTEM();
     
     static unsigned short sleep_validator;

     friend class sleep_machine;

   }sleep_sys, *sleep_system, **Sleep_Sys;
 }
namespace SLEEP_S = SLEEP_SYS;
}
namespace STD = std;

unsigned short STD::SLEEP_SYS::__SLEEP_SYSTEM::sleep_validator = 0xAffu;

namespace STD_SYS{
 namespace SLEEP{
   class sleep_machine{
     private:
      std::SLEEP_SYS::__SLEEP_SYSTEM sleep_s;
      string* syst_sleep;
     public: 
      sleep_machine(string sys_sleep);
      virtual ~sleep_machine(){
        delete syst_sleep;
      }
   };
 }
}

STD_SYS::SLEEP::sleep_machine::sleep_machine(string sys_sleep):sleep_s(sys_sleep){syst_sleep = new string(sys_sleep);}

STD::SLEEP_S::__SLEEP_SYSTEM::~__SLEEP_SYSTEM(){
    PRINT_TO_SCREEN("\nSystem shutdown successfully...");

    delete sys_provider;
}

typedef union __ERROR_SYS__{
  union{
     char* timing_func_err;
     signed error_system_value;
  }err;
}error, *error_sys, **err_sys;

static int number_of_files;

static STD_SYS::SLEEP::sleep_machine *sleep_mchn;

int& addressing_system(unsigned int = 00, ...);
static inline string sys_timer(string = (string)__system_time);

volatile signed check_machine_value(union __ERROR_SYS__** SYS_ERROR){
  
  void* sys_err;

  sys_err = (void*)*SYS_ERROR;
  
  static error_sys sys_error = static_cast<error_sys>(sys_err);
  
  if(sys_error  == NULL){
      puts("Please an error occured while trying to initialize the system timer........");
  }
  else{
       cout<<"\nInitializing the system timing configuration settings......"<<endl;

       sys_error->err.error_system_value = 0x0000;
  }

  return sys_error->err.error_system_value;
}


__callback_main int32_t __stdcel __codecl __start_main(int argc, PCHAR argv[]){
try{
  CHAR nespace[7] = "\n\n\n\t\t\t";
  static string GMT;
  error eror_sys;
  error_sys error_1;
  err_sys sys_error;
  
  error_1 = &eror_sys;
  
  sys_error = &error_1;


  sleep_mchn = new STD_SYS::SLEEP::sleep_machine("01:00:29");

  GMT = sys_timer();
  
  PRINT_TO_CONSOLE(GMT);

  PRINT_TO_SCREEN("%sStarting System.....", nespace);
  
  addressing_system() = 5000;
  
  TOTAL_FILE_SIZE_ON_DISK("%c%c%c%d", '\n', '\t', '\t', addressing_system());
  
  delete sleep_mchn;

  if(check_machine_value(sys_error) == 0x0000){
    printf("\nSystem is in a good condition....");
  }
  else{
    goto out_to_next;
  }
out_to_next:
        throw *error_1;
}
catch(union __ERROR_SYS__& error_2){
  
    error_2.err.timing_func_err = "\nSystem crashed as a result of an unknown system error or bug. Error code 0x0002Ad33FFbE.";

    std::cout<<error_2.err.timing_func_err<<endl;
}
catch(...){

}
  return 0x00U;
}

int& addressing_system(unsigned int number_of_files, ...){
  
  ::number_of_files = (int)number_of_files;

  return ::number_of_files;
}

string sys_timer(string tm){
  
  return  tm;
}
