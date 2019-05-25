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
#define file_alert "Checking driver formating on storage medium....."
#define loader_file_driver "Loading files driver  from kernel...."
#define gathering_file_drv_results "Gathering all information about storage driver....." 
#define sending_file_drv_results "Sending results to the Filesystem device manager......"
#define filesystem_driver(file_alert) 
#else
#define error_check_on_storage_medium_failure "Please an error occured while checking the device driver on the disk drive. If this continue to be a problem, contact a technician with error code : 0x00aCEBBC"
#define error_check_on_hard_disk_drive\
                             (error_check_on_storage_medium_failure)
#define error_check_on_floppy_disk_drive\
                    (error_check_on_storage_medium_failure)
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

#ifdef __cplusplus
}
#endif//__cplusplus

#ifndef __cplusplus 
#error A++ Please a macro has not being defined by the standard\
                           ISO C++ or ANSI C
#line 7 __FILE__
#endif//__cplusplus

#define DISPLAY_TO_SCREEN_ON_START_UP printf
#define PRINT_TO_SCREEN_ON_REBOOT(reboot)\
                      std::cout<<reboot<<std::endl
#define __callback_main 
#define __stdcel 
#define __codcel __callback_main
#define sys_id 255
typedef char *cpu_id;
typedef cpu_id system_ram, system_type;
typedef int cpu_entity;

struct BIOS;

typedef struct __boot_bios_main{
  std::string sys_time;
  char* bios_version;
  cpu_id cpu_idsys;
  std::string number_cache;
  char system_id[sys_id];
  char* system_manufacturer;
  char* system_date_manufacturing;
  cpu_entity number_cpu;
  union{
     system_ram ram_size;
  }rm;
  struct __boot_bios_main *bootsystem;
}boot, *Boot, **_BOOT;

struct BIOS{
  boot *btsystem;
};

static struct BIOS bios1;

static struct BIOS* bios;

static inline const void __codcel booting_system(const char*, ...);
static bool sys_boot(struct __boot_bios_main* bbiosmain, ...){
  using namespace std;
  static char* btime = "System time is ";
  cout<<'\n'<<btime<<(*bbiosmain).sys_time<<endl;

  return true;
}
__callback_main int32_t __stdcel main(int32_t argc, pchar32_t argv[]){
  static boot btoot = {__TIME__, "Bios version 1.0.01.1", "Intel x86-64 Dual Multi-processor/core 3.0GHz 1800+1", "Number of Caches  3", "19002AACVBX00PCDS", "Cyber Peace && Secret Intelligence", "21/01/2005", 2, .rm.ram_size = "1280MB/1.25GB"};

  const char startup[BOOT] = "System starting...........";
  bios1.btsystem = &btoot;
  bios1.btsystem->bootsystem =  &btoot;

  booting_system(startup);
  sys_boot(&btoot);

  return 00l;
}

const void booting_system(const char *const start_computer, ...){
    
  DISPLAY_TO_SCREEN_ON_START_UP("%c%s", '\n', start_computer);

  return;
}
