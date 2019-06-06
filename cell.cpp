#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<typeinfo>

//#pragma once 
#undef __cplusplus

#ifdef __cplusplus
extern "C"{
#endif//__cplusplus

 namespace CMD{
  namespace{
    typedef int int32_t;
    typedef int32_t *pint32_t, **pint4_t;
    typedef char PCHARR[], *PCHAR;
    typedef PCHAR PTCHAR[];
 }
}
namespace cmd = CMD;

#ifdef __cplusplus
}
#endif//__cplusplus

#define sys_send_message "The process can't access the file\ because it being used by another file"
#define status_exit_code !(!(00000000))
#define MessageBox(sys_send_message) 

#ifndef __start_main
#define __start_main main
#define __callback_main 
#define __stdcel 
#define __codecl __callback_main
#define __std_start_
#elif not defined MessageBox(sys_send_message)
#undef MessageBox
#define MessageBox(sys_send_message) 
#define sys_shutdown(run_boot_loader) ~(run_boot_loader^0x0001)
#else
#define send_req "@root/usrbin/zindex OS/....."
#define bboot "#usrbin/zindex OS/HP/Computer/Document/...."
#define DRIVE_LETTER1 "C:\\..."
#define DRIVE_LETTER2 "C://..."
#define DRIVE_LETTER3 "C:\\HP\..."
#endif/*This is the main/execution entry point of the program*/

typedef int int4_t;
typedef char MBR_BOOT;
typedef char* FPART;
typedef signed short part_totale;
typedef char* usr_disk_name;


#define MBR 512
#define MERGE_CONQUER(hack, exploit) hack##exploit
#define SYSTEM_COLOR(sys_color) {return sys_color;}
#define call_device
#define handle_device_event call_device
#define handle_irq handle_device_event
#define rem_dvc
#define sys_super "System in supervisory mode"

 float hack(){
  
  static const float hackinson = 9.001;
  
  return hackinson;
}

float expoit(){

  return 80.0;
}

using namespace CMD;

struct ZNDX_FILE_PART;

typedef struct _zindex_boot{
  char mbr[MBR];
  unsigned zndx_btloader_id : 2;
  int : 0;
  struct ZNDX_FILE_PART* zfile_part;
  union{
    char* zndx_loaderName;
    long mem_load;
  };
}zindex_boot, *zindexboot, **zndxbt;

typedef struct ZNDX_FILE_PART{
  static FPART Disk_fileName;
  part_totale fpart;
  usr_disk_name user_disk_name;
}ZFPT;

enum class sysm_color{
  WHITE,
  BLUE = 0x00120012u,
  GREEN = 00100101,
  RED = 010223433L,
  YELLOW,
  GRAY = 201,
  GREY = 255
};

class dev_interface;

namespace DEVICE_MANAGER{
 namespace DEVICE{
  template<typename dev_name, class dev_id = unsigned int, typename dev_class = std::string>
  class device_manager{
    private:
     dev_name deviceName;
     dev_id devId;
     dev_class devClass;
     dev_id* dvId;
    public:
     call_device device_manager() = default;
     device_manager(dev_name deviceName, dev_id dvid = 0)
     :deviceName(deviceName), devClass("ZXNDSKE33201-12"),
      dvId(new dev_id[devId]){
       devId = dvid;
       using namespace std;

       cout<<"Initializing & Installing device drivers............."<<endl;
     }
     virtual ~device_manager();
     virtual void __sys_cal(size_t ret_sys_call = 0) = 0;
     void operator()(std::string device_analyzer = "Not available"){
         
          std::cout<<device_analyzer<<std::endl;

       return;
     }
     const char *const send_dv_message(char derror[])const;
  }; 
  template<typename dev_name, class dev_id, typename dev_class>
   const char *const device_manager<dev_name, dev_id, dev_class>::send_dv_message(char derror[])const{
  
     return derror;
    }
 }
  using namespace DEVICE;

class dev_interface : protected device_manager<std::string>{
  public:
   void __sys_cal(size_t ret_sys_call){
      dev_interface dint;
      device_manager<std::string>& dmanager = dint;

      dmanager.operator()();
   }
   const char* const send_dv_message(char[] = "No Error.")const;
};

inline const char *const dev_interface::send_dv_message(char derror[])const{
  return derror;
}

namespace dm = DEVICE;
}
namespace device = DEVICE_MANAGER;

template<typename dev_name, class dev_id, typename dev_class>
device::dm::device_manager<dev_name, dev_id, dev_class>::~device_manager(){delete[] dvId;}

static enum sysm_color symcolor;

__stdcel int32_t __callback_main __start_main(int4_t argc, PTCHAR argv)__codecl{
 using namespace std;
try{
  char* color[] = {"Configuring grapics card for color\ change....", "Screen Resolution reduced by 10x", sys_super};
  symcolor = sysm_color::GREY;
  static device::dev_interface* dint = new device::dev_interface;
  dint->__sys_cal(0);
  static device::dev_interface dginter;
  
  if(symcolor == sysm_color::GREY){
    cout<<color<<endl;
  }
  else if(symcolor == sysm_color::WHITE){
    
    printf("%s", color[1]);
  }
  else{
    printf("%s", color[2]);
  }
  throw dginter;

}
catch(device::dev_interface& dmanager){
   printf("%s", dmanager.send_dv_message("Please a device not responding. Check whether any newly or faulty hardware(H/W) has being installed or inserted into the computer. Please Remove and reboot or restart the system....")<<endl;
}
//dm::device_manager<std::string>
 return status_exit_code;
}
