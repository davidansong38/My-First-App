#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<typeinfo>

#undef __cplusplus
#ifndef __cplusplus
#define __cplusplus 1
#endif//__cplusplus

#ifndef __cplusplus
#line 8 "main.cpp"
#error A++ Please a macro has not being defined yet by\ the standard ISO C++
#endif/*__cplusplus*/

#ifdef __cplusplus
extern "C"{
#endif//__cplusplus

   typedef int int32_t;
   typedef int32_t *pint32_t, **ptint32_t;
   typedef char *PCHAR;
   typedef PCHAR (func_pointer)(int, int, ...);
   
   #define __CALLBACK_MAIN
   #define __stdcel
   #define __codecl __stdcel
   #define DVD_OPEN_TRAY(open_tray) (open_tray/01<<1)

   #if DVD_OPEN_TRAY(open_tray) == (open_tray/01<<1)
   #define MessageBox(alarm) (alarm >> 2)
   #else 
   typedef struct __RESPOND{

   }respond, *__respond, **rest_respond_time;
   #endif//
   enum{
       SOCKET_1,
       SOCKET_2,
       SOCKET_3
   }soc_proc;

   #define JOIN_INFO
   #define PRINT_TO_SCREEN printf

#ifdef __cplusplus
}
#endif//__cplusplus

extern JOIN_INFO void showmessage(unsigned int num, ...);

int32_t __CALLBACK_MAIN __codecl __stdcel main(int argc, char* argv[]){

    PRINT_TO_SCREEN("Print hello, world.........");
    
    return 0x00L;
}
