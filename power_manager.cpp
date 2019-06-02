#include<iostream>
#include<typeinfo>
#include<stdio.h>
#include<stdlib.h>


//#pragma once 
#undef __cplusplus
#define __cplusplus

#ifdef __cplusplus
#define __codecl
#define __stdecl __codecl
#define __callback_main
#define MessageBox(dispatch_id) dispatch_id^01
#elif defined __start_main
#define get_resc "Please wait while system acquire necessary resources.........."
#define __waiting_thread(get_resc)
#else 
#define cpu_state 0x000120U
#define localhost "@root/locahost/....."
#endif//__colusplus

#ifndef __cplusplus
#line 9 "zindex.cpp/main.cpp"
#error A++ Please a macro has not being defined by the Standard ISO C++ or ANSI C in your source code
#warning Warning Please this is a serious offends.....
#endif//__cplusplus

#define DISCLAIMER ~00000000
#define sys_exception 02331
#define SYS_AUTO_CONFIG 12
#define send_req printf
#define resend_req(sending) std::cout<<sending<<std::endl
#define spin_req puts

#if DISCLAIMER == ~00000000
typedef unsigned short run_power_manager;
typedef long config_pwr_settings;
typedef float power_level_in_dcml;
struct{ 
  run_power_manager rpm;
  config_pwr_settings cps;
  power_level_in_dcml pldl;
}power;
#elif SYS_AUTO_CONFIG == 23
#define sys_search_eng 012
#define sys_index_ 102
#define shutdown_sys 1
#else
if(sy_exception == 02331 | cpu_state > 2){
    send_req("The process is being used by another process!!!");
}
else if(!sys_exception){
    resend_req("Application terminated due to an unknown problem...");
}
else{
    spin_req("An error occured while processing your request...");
}
#endif//Error handling mechanism suite for system self test

#define POST_MBR 

using namespace std;

char run(){return 'C';}

int main(void){
    
    char arg = 'A';
    
    char *esend[] = {"waiting.....", "@@@@@@@@","#$#@@@$^^&*", &arg, run};
    
    send_req("%s", esend[4]);
    
    return 0x00l;
}







