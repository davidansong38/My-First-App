#include<iostream>
#include<typeinfo>
#include<stdio.h>
#include<stdlib.h>

#undef _start_main
#define _start_main main

#ifdef _start_main
#define PRINT_TO_SCREEN printf
#define PRINT_TO_CONSOLE
#define GET_KEBOARD_INPUT_FROM_USER scanf
#define DETECT_VIRUS_ON_SYSTEM 00
#define Message_Box
#define Crash_any_faulty_Program ~001
#elif defined __start_main
#define SEND_VIRUS_
#else 
#define RETRY_PROCESS
#endif//_start_main

typedef char *FILE_DIRECTORY;

typedef struct FILESYSTEM_DEVICE_DRIVER{
  FILE_DIRECTORY file_directory;
  char* filename;
  int file_inode;
  unsigned long number_of_file;
  signed short file_address;
}FileSystem, *FILESYSTEM, **Filesystem;

static inline struct FILESYSTEM_DEVICE_DRIVER* Search_files(FILESYSTEM, ...);

template<typename T>
T create_calculator(char = '*',T = 0, T = 0, ...);

static FileSystem files = {"C://", "zindex.mp3", 0x00A, 00, 0x002ABF};

int main(int argc, char* argv[]){
  using namespace std;
try{
static struct FILESYSTEM_DEVICE_DRIVER* fl = new struct FILESYSTEM_DEVICE_DRIVER;

if(fl == NULL) {
  std::cout<<"System was unable to allocate memory to the object..."<<std::endl;
}
else{
  puts("System successfully allocated memory to the Process...");
}

int num1, num2;
char op;
  
std::cout<<"Enter an operator(*,+,/,%,) -: "<<endl;
std::cin>>op;

  PRINT_TO_SCREEN("Please enter any two values -- ");
  scanf("%i%d", &num1,&num2);
  create_calculator<int>(op,num1,num2);

  Search_files(&files);

  PRINT_TO_SCREEN("\n\n\nTesting monitor display..........");
  
  delete fl;

  int er;

  throw er;
}
catch(string& error){
  error = "0xAefda1u";

  std::cout<<"\nError occured with error code or address "<<error<<endl;
  //printf("%s", error);
}
catch(...){

}
  return 0;
}

template<typename T>
T create_calculator(char check_operator, T check_number1, T check_number2, ...){
   
   switch(check_operator){
     case '+':
      std::cout<<check_number1 + check_number2<<std::endl;
      break;
     default:
       PRINT_TO_SCREEN("Please we can't calculate this value with this operator for now...");
   }

  return 00;
}

struct FILESYSTEM_DEVICE_DRIVER* Search_files(FILESYSTEM file, ...){
   
  //printf("%s", file->filename);

  return file;
}
