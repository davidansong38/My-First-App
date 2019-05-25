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

#ifdef __cplusplus
}
#endif//__cplusplus

#ifndef __cplusplus 
#error A++ Please a macro has not being defined by the standard\ ISO C++ or ANSI C
#line 7 __FILE__
#endif//__cplusplus

#define DISPLAY_TO_SCREEN_ON_START_UP printf
#define PRINT_TO_SCREEN_ON_REBOOT(reboot)\ std::cout<<reboot<<std::endl
#define __callback_main 
#define __stdcel 
#define __codcel __callback_main

static inline void __codcel booting_system(const char*, ...);

__callback_main int32_t __stdcel main(int32_t argc, pchar32_t argv[]){

  char startup[BOOT] = "System starting...........";

  return 00l;
}

void booting_system(const char*);
