#include<iostream>
#include<typeinfo>
#include<stdio.h>
#include<stdlib.h>

#pragma once 
#undef __cplusplus
#define __cplusplus 1

#define __start_main main 
#define status_exit_code (!(0x0000u))

#if status_exit_code == 0x0001u
#define __codecl 
#define __callback_main __codecl
#define __stdcel __callback_main
#elif status_exit_code > 0x00001u
#define send_message "Dialog box says \"Welcome to Windows\""
#define MessageBox(send_message) 
#else 
#define END_C(OUT) OUT/01<<1
#endif//

#ifdef __cplusplus
extern "C"{
#endif//__cplusplus

  typedef int int32_t;
  typedef int32_t *pint32_t, **pint4_t;
  typedef char *PCHAR, (*RECHAR)(const char*, ...);

  typedef struct DISK_CLEANER{
    PCHAR diskcleaner;
  }disk_cleaner, *Disk_Cleaner, **DiskCleaner;

#ifdef __cplusplus
}
#endif//__cplusplus

#ifndef __cplusplus
#error A++ Please a macro has not being defined by the Standard\
ISO C++ or ANSI 
#line 8 "boot.h"
#warning Warning Please definition of a macro is missing from \
one of your source files(Header files)
#elifndef __dispatch
#define __dispatch "Creating Window....."
#else
struct{
   char* unused_items;
   string recycle_unused_items;
};
#endif/*Error or Bug in program*/
