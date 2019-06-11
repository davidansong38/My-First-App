#ifdef __cplusplus
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<typeinfo>
#endif// Macro check

#pragma once
#undef __cplusplus

#ifdef __cplusplus
#line 5 "main.c"
#error A++ Please a macro defined by the Standard ANSI C is not allowed
#warning Please undefine a macro 
#elifdef __start_main
#undef __start_main
#else 
#define sys_stop(stop) stop<<0x000002
#define restart_sys(rsys)
#endif// Error check on __cplusplus macro 

#ifndef __cplusplus
#define __cplusplus 01
#elif not defined __start_main
#define __start_main main
#else
#define send_message "The process is currently processing the\ request......
#define MessageBox(send_message)
#endif/*Error handling still on __cplusplus*/

#ifdef __cplusplus
extern "C"{
#endif// __cplusplus

 typedef int int32_t;
 typedef int32_t *pint32_t, **pint4_t;
 typedef char *PCHAR;
 typedef PCHAR PTCHAR[];
  
 #define fsystem_res printf
 #define re_resfsystem puts
 #define FSYSTEM_SYS fsystem_res

#ifdef __cplusplus
}
#endif//__cplusplus

void sys_filesystem(const char *const filesys = "Filesystem not installed......", int8_t number_of_bytes = 0, bool file_descriptor = false, ...){

   #if number_of_bytes == 0 && file_descriptor == false
   #define FILE_SIZE number_of_bytes
   #define FILE_DESCRIPTOR file_descriptor 
   #elif number_of_bytes > 0 | file_descriptor == true
   #define FileSize number_of_bytes
   #define FileDescriptor file_descriptor
   #else
   #define filesize_unavailable number_of_bytes
   #define filedescriptor_invalid file_descriptor
   #endif//
   
   #define FileSize number_of_bytes
   #define FileDescriptor file_descriptor

  if(FILE_SIZE == 0 & FILE_DESCRIPTOR == false){
      fsystem_res("No File Size Available. Please Filesystem driver wasn't able to install on your system.");
  }
  else if(FileSize > 0 | FileDescriptor == true){
      FSYSTEM_SYS("Please wait whiles file is being processed.....");
  }
  else{
      re_resfsystem("_ERROR__CODE__!Invalid file system formatting!!!");
  }

  return;
}
#include"system"

#pragma once 

#define __codecl
#define FILESYSTEM 0x0014
#define FILE_LAYOUT 0x20
#define __CPP 
typedef char filesystem_name[FILESYSTEM];
typedef char *fileName;
typedef unsigned short fileSize;
typedef long total_filesz;
typedef char *fileInode, *file_Inode, *file_inode;
typedef char file_layout[FILE_LAYOUT];
typedef char (*file_run_fthread)(const char*, int8_t, ...);
typedef signed short frepeat_processing;

struct File_System;

typedef struct File_System{
  filesystem_name file_system_name;
  total_filesz file_totalSize;
  fileName filename;
  fileSize filesz;
  file_inode fileinode;
  file_layout fileLayout;
  file_run_fthread fthread;
  frepeat_processing fprocess : 0x03;
  frepeat_processing : 0;
  union{
    long int numberQueue_File;
  }queue;

  volatile char bad_file[255];

}filesystem, *Filesystem, **FileSystem;


extern __codecl __CPP void sys_filesystem(const char* filesys,  int8_t number_of_bytes, bool file_descriptor, ...);

#include"sys_req.h"

#undef __codecl

#ifndef __codecl
 using namespace std;
#endif//

#ifndef __start_main 
#define __start_main main
#define __callback_main
#define __codecl __callback_main
#define __stdcel __codecl
#define begin_code_entry {
#define end_code_exit }
#elif not defined BEGIN_CODE 
#define BEGIN_CODE {
#define END_CODE }
#else
#define chng_task1 
#define CHANGE_PROCESS_TASK(chng_task1) 
#endif//

#define UNKNOWN 00

//template<class FWRITE
template<typename snd_type>
snd_type snd(int = 0, ...);

static filesystem flz = {.file_system_name = "Unknown File System", 9000};

__callback_main int32_t __codecl __start_main __stdcel(int32_t argc, PTCHAR argv)
begin_code_entry

  static Filesystem file = new struct File_System;
  
  file->fthread = (file_run_fthread)sys_filesystem;

  file->fthread("Filesystem not installed......", 0x00, false);
  
  (*file).queue.numberQueue_File = UNKNOWN;
  
  snd<void>(1);

  return 0x0000U;

end_code_exit


template<typename snd_type>
snd_type snd(int send, ...){
  
  int k = send, j = send;

  unsigned int LOOP[0x02][0x02][0x03] = {
                                        {{1,22, 9},{11,2,90}},
                                        {{12,31,43},{4,55, 77}}
                                        };
  
  for(int i = 0; i < 2; i++){
   for(;j < 2; j++){
     for(;k < 3; k++){
       printf("\n%i", LOOP[i][j][k]);
     }
   }
  }
}
