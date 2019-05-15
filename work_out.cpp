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
 class FileSystem : public virtual KERNEL_OS<string,unsigned int,char>{
     public: 
        virtual void check_system(){

         return;
       }
  };
 }
namespace KERN = KERNEL;
}
namespace STD = std;

template<typename KERNEL_NAME, class KERNEL_ID, typename KERNEL_VERSION>
STD::KERN::KERNEL_OS<KERNEL_NAME,KERNEL_ID,KERNEL_VERSION>::~KERNEL_OS(){delete[] kernelOS_allocator;}

#define PRINT_TO_SCREEN printf
#define PRINT_TO_CONSOLE(system_out) std::cout<<system_out<<std::endl
#define BOOT_SYS 512

typedef char NEW_BOOT_SYSTEM[BOOT_SYS];
 
using namespace STD::KERNEL;

void finish_Shutdown_Process(KERNEL_OS<>& rgs){

}
__stdcel int4_t __callback_main __codcel __start_main(int argc, char* argv[])
BEGIN_CODE 
 {
   using namespace std::KERNEL;

   Update_OS ups;
   
   FileSystem file;

   //KERNEL_OS<>& argd = Search_file;
 }
 NEW_BOOT_SYSTEM SPACER = "\n\n\t\t\t";

 PRINT_TO_SCREEN("%sSystem booting...", SPACER);
 
 return status_exit_code;
END_CODE
