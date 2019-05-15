#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<typeinfo>

using namespace std;

//#pragma once
#undef __cplusplus
#define __cplusplus 01
#ifdef __cplusplus
extern "C"{

  typedef int int4_t;
  typedef char *PCHAR, **PTCHAR;
  typedef int4_t (*func_p)(int,...);

#undef __start_main
#define __start_main main

#ifdef __start_main
#define __callback_main
#define __stdcel __callback_main
#define __codcel 
#elif defined start_main
#define RETURN return
#else
#define MessageBox(hit_Tag) (hit_Tag<<1)

#endif//__start_main
}
#endif//__cplusplus

#define BEGIN_CODE {
#define END_CODE }
#define status_exit_code 0x0000u


class Update_OS{};


namespace std{
 namespace KERNEL{
   template<typename KERNEL_NAME = std::string, class KERNEL_ID = unsigned int, typename KERNEL_VERSION = char>
  class KERNEL_OS{
    private: 
     KERNEL_NAME kernelName;
     KERNEL_ID kernelId;
     KERNEL_VERSION* kernelVersion;
    public:
     KERNEL_OS(const KERNEL_NAME kName = "ZINDEX OS VIX 1"):kernelId(30010219){
       kernelVersion = "1.0.0.1";
       kernelOS_allocator = new unsigned int[kernelId];
     }
    explicit KERNEL_OS(const Update_OS& args);
    protected:
      unsigned int* kernelOS_allocator;
    virtual ~KERNEL_OS();
    
    virtual KERNEL_OS* run_system();
    virtual void check_system() = 0;
    friend unsigned int Run_Check_On_Computer_Memory();
    static double Detect_Virus_On_System();
  };

  template<typename KERNEL_NAME, class KERNEL_ID, typename KERNEL_VERSION>
  inline double KERNEL_OS<KERNEL_NAME,KERNEL_ID,KERNEL_VERSION>::Detect_Virus_On_System(){
      

      return (12.0 > 1.1)?0.0 : 1.0;
  }

   /*template<typename KERNEL_NAME = std::string, class KERNEL_ID = unsigned int, typename KERNEL_VERSION = char>*/
 class FileSystem{
     public: 
       FileSystem() = default;
        virtual void check_system(){
   
           std::cout<<"Creating a new File System on Storage Medium with default File System(fs=ADFTS)........."<<std::endl;
          std::cout<<"Please this will take not less than 5 minute  to finish the filesystem device driver creation on disk....."<<endl;
         return;
       }
      ~FileSystem(){}
       FileSystem& operator=(const FileSystem&) = delete;

       void operator()(string = "Almost done with the installation of FileSystem Device Driver on the Disk...");
  };
 }
namespace KERN = KERNEL;
}
namespace STD = std;

void STD::KERN::FileSystem::operator()(string str){
   
   #define PRINT_TO_CONSOLE(out) std::cout<<out<<endl

   PRINT_TO_CONSOLE(str);

}

template<typename KERNEL_NAME, class KERNEL_ID, typename KERNEL_VERSION>
STD::KERN::KERNEL_OS<KERNEL_NAME,KERNEL_ID,KERNEL_VERSION>::~KERNEL_OS(){delete[] kernelOS_allocator;}

#undef PRINT_TO_CONSOLE

#define PRINT_TO_SCREEN printf
#define PRINT_TO_CONSOLE(system_out) std::cout<<system_out<<std::endl
#define BOOT_SYS 512

typedef char NEW_BOOT_SYSTEM[BOOT_SYS];
 
using namespace STD::KERNEL;

void finish_Shutdown_Process(KERNEL_OS<>& rgs){

}

 typedef struct __SYS_TIMER{
   signed int timer_n;
   static int systm_timer_resAddress;
      struct{
        string system_time;
      }sys_time;
  }SYS_TIMER;

struct error_d{
 protected:
   string err1;
 public:
   error_d(string er){
     err1 = er;
   }
   string error(){
     return err1;
   }
};

enum class COLOR{
   WHITE,
   BLUE = 00001000,
   RED = 02311,
   GREEN = 0X012,
   BLACK = 255
};

const enum COLOR col = COLOR::GREEN;

static struct __SYS_TIMER *sys_tm1;

typedef int int32_T;

static int32_T glob;

int& test();

#define KEYBOARD_INPUT_FROM_SCREEN scanf
#define KEYBOARD_DRIVER std::cin
#define run_mul_req(outp) std::cout<<outp<<std::endl

__stdcel int4_t __callback_main __codcel __start_main(int argc, char* argv[])
BEGIN_CODE 
{
   using namespace std::KERNEL;
   
   char r, rucd = 'A';
  
     char*  tink = &rucd;
   
    void** rc = (void**)&tink;

    char** dce = (char**)rc;
    
    char* cs = (char*)*dce;

   char user_request[255];

   if(col == COLOR::BLUE){

     KEYBOARD_INPUT_FROM_SCREEN("%s", user_request);

     PRINT_TO_CONSOLE(user_request);
   }
   else if(col == COLOR::WHITE || col == COLOR::BLACK){
     goto run_request;
   }
   else{
     for(int i = 0; i < 12; i++){
       run_mul_req("System Failed to Process information. Alert...");
     }
     goto exit;
   }

   #define SHUTDOWN "Shutting down system to prevent any further problems...."

 run_request:
    switch(0x01){
     case 0x01:
      printf("Sending System to Sleep....%c", '\n');
      break;
     case 0x23:
       std::cout<<SHUTDOWN<<endl;
       break;
     default:
       puts("No Unavailable now...");
    }
 exit:
  PRINT_TO_SCREEN("\nLoading....\n"); 
  goto run;

run:
   Update_OS ups;
   FileSystem file;
   file.check_system();
   file();
   
  //KERNEL_OS<>& argd = Search_file;
}

 NEW_BOOT_SYSTEM SPACER = "\n\n\t\t\t";

 PRINT_TO_SCREEN("%sSystem booting...", SPACER);

  try{
  
  sys_tm1 = new struct __SYS_TIMER;
  
  sys_tm1->sys_time.system_time = "00:00:00";
  
  static struct error_d *e = new struct error_d("");

  delete sys_tm1;


  test() = 0xAFFB;

  printf("%d", test());

  throw *e;
  }
  catch(struct error_d& er){

    std::cout<<er.error()<<std::endl;
  }
 catch(...){

 }

 return status_exit_code;
END_CODE

int& test(){

  return glob;
}
