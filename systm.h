#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<typeinfo>

//#pragma once 

using namespace std;

#undef __cplusplus 

#ifndef __cplusplus
#define __cplusplus 1
#else
#define DVD_OPEN_TRAY(send_message) (send_message/0x1 << 01)
#endif//__cplusplus

#ifndef __cplusplus
#line 9 "main.cpp"
#error A++ Please a macro has not being defined by the Standard ISO C++ 
#endif//__cplusplus

#ifdef __cplusplus
extern "C"{
#endif//__cplusplus

#undef __start_main
#define __start_main main

#ifdef __start_main
#define __callback_main
#define __codecl
#define __stdcel __codecl
#elif defined __worker_thread
#define __run_system_registry_files(reg_files) (reg_files)
#define _stop_system_registry_files(stop_sys_reg_files)\ (stop_sys_reg_files)
#else 
#define __system_time  __TIME__
#define __out_file_name __FILE__
#endif//__start_main

#define PRINT_TO_SCREEN printf
#if PRINT_TO_SCREEN == printf
#define PRINT_TO_CONSOLE(output) std::cout<<output<<std::endl
#define TOTAL_FILE_SIZE_ON_DISK printf
#elif PRINT_TO_SCREEN != printf
#define __BEGIN_SESSION 0x0ABEff0221L
#else 
#define PUT_ON_SCREEN puts
#endif//PRINT_TO_SCREEN

#undef NULL

#define __system_time  __TIME__
#define NULL 0x00000000U

typedef int int32_t;
typedef int32_t *pint32_t, **ptint32_t;
typedef char CHAR, *PCHAR;

#ifdef __cplusplus
}
#endif//__cplusplus
