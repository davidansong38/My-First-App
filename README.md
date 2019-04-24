#include<stdio.h>
#include<iostream>
#include<typeinfo>
#include<stdlib.h>

#undef start_main

#define start_main main

#ifdef start_main
#define BEGIN_CODE {
#define END_CODE }
#define __stdcel
#define __codecl
#define __callback_main __codecl
#define RETURN return 
#else
#define status_exit_code 0x00000000u
#endif//start_main


typedef int int32_t;
typedef char *PCHAR;

int32_t main(int argc, char* argv[])
BEGIN_CODE

  RETURN 00;
END_CODE
