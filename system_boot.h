#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<typeinfo>

//#pragma

#undef __cplusplus 
#define __cplusplus 0x0001

#ifdef __cplusplus
extern "C"{
#endif//__cplusplus

#ifdef __cplusplus
typedef int int32_t;
typedef char *pchar32_t;
#elif defined __start_main
#define repeat_route ~(32<<0x01)
#define file_alert "Checking driver formating on storage\ medium....."
#define loader_file_driver "Loading files driver files from\ kernel...."
#define gathering_file_drv_results "Gathering all information about storage driver....." 
#define sending_file_drv_results "Sending results to the Filesystem device manager......"
#define filesystem_driver(file_alert) 
#else
#define error_check_on_storage_medium_failure "Please an error occured while checking the device driver on the disk drive. If this continue to be a problem, contact a technician with error code : 0x00aCEBBC"
#define error_check_on_hard_disk_drive\(error_check_on_storage_medium_failure)
#define error_check_on_floppy_disk_drive\(error_check_on_storage_medium_failure)
#define error_check_on_cd(error_check_on_storage_medium_failure)
#endif//__cplusplus

#define usr_mss 00100111
#define MessageBox(usr_mss)
#define BOOT 50

#if usr_mss == 39 | usr_mss == 0x27
#define WINAPI 
#define WinMain main
#define RegisterClass(struct WNDCLASS* wnd) 
#elif usr_mss != 0x27
#define send_sys_sleep 
#else 
#define schedular(schedule_processes) schedule_processes^01
#endif//
#define __IO_SUBSYSTEMS__ 

#ifdef __cplusplus
}
#endif//__cplusplus

namespace std{
 namespace{
   namespace io_systems{
     template<typename io_names = std::string, class io_address = unsigned int, typename io_port_address = unsigned int>
     class io_subsystems{
       private:
         io_names io_name;
         io_address io_addr;
         io_port_address io_port_addr;
         io_address* io_saddr;
       public:
        __IO_SUBSYSTEMS__ io_subsystems(io_names io_n = "System is off.", 
        io_address io_addr = 0xa01caa, io_port_address io_port_ad = 01)
        :io_name(io_n),io_addr(io_addr),
         io_saddr(new io_address[io_addr]){
          io_port_addr = io_port_ad;
        }
      virtual ~io_subsystems();
     } ;
   }
 } 
}
 template<typename io_names, class io_address, typename io_port_address>
std::io_systems::io_subsystems<io_names,io_address,io_port_address>::~io_subsystems(){delete[] io_saddr;}

using namespace std::io_systems;

static inline io_subsystems<std::string>& io(io_subsystems<>*s_io); 





