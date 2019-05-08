#include<iostream>
#include<stdio.h>
#include<typeinfo>
#include<stdlib.h>

using namespace std;

typedef int int32_t;
typedef char *PCHAR, **PTCHAR;
typedef int32_t (*func_pointer)(int,...);

#undef __cplusplus
#ifndef __cplusplus
#define __cplusplus 1
#endif//__cplusplus

#ifdef __cplusplus
  extern "C"{
#endif//__cplusplus    
  using namespace std;  
//#pragma once

   #undef start_main
   #define start_main main
   #define dvd_message_in 001
   
 #ifdef start_main
   #define __callback_main
   #define __stdcel 
   #define __codecl __stdcel
 #elif dvd_message_in 002
   #define dvd_message_out 002
   #define cd_message_in 0x0001
 #else
   #define __flex_out 0782
 #endif//start_main
 
 #ifndef dvd_message
  #line 22 "main.cpp"
  //error A++ Please 
 #endif// dvd_message
 
 #define PRINT_TO_SCREEN printf
 #define PRINT_TO_CONSOLE(out) std::cout<<out<<std::endl
 
#ifdef __cplusplus 
}
#endif//__cplusplus

class Vector;

typedef unsigned long ULONG;
typedef long double LONGD;
namespace std{
 namespace opcode{
    class Vector{
        private:
         unsigned long x;
         long double y;
         unsigned long* x_y;
        public:
         Vector() = default;
         Vector(ULONG x, LONGD y = 12.01):x{x},y(y),
         x_y(new unsigned long(x)){
             
             std::cout<<"Constructor..."<<endl;
         }
         Vector(int& e)throw() = delete;
         
        virtual ~Vector();
        
        static bool quit;
        
        static float lvalue;
        
        static const char*const what()throw(){
            
            return "My first exception";
        }
        
        virtual void git() = 0;
    };
    
    bool Vector::quit = true;
    
    float Vector::lvalue = 1.0;
 }
namespace opc = opcode;
}
namespace stdl = std;

#define MBR 512

class Shapes : public virtual stdl::opc::Vector{
    public:
     Shapes(int& e){}
     
     virtual void git(){
         
         char strcth[MBR] = "@##&238**@1920)!2#((1";
         
         std::cout<<strcth<<endl;
         
         return;
     }
     
     void operator()(string s);
};

typedef struct __Video{
    public:
     union _Dvd{
         private:
           signed short n;
         public:
           void rt()const{
               printf("%d", n);
           }
     };
}Video;

void Shapes::operator()(string s){
    
    char n = '\n';
    
    printf("%c", n);
    
    cout<<s<<endl;
}

stdl::opcode::Vector::~Vector(){delete x_y;}

static inline const int hub();

int32_t __callback_main __stdcel __codecl start_main(void){
    
    PRINT_TO_CONSOLE("Hello, World...");
    
    hub();
    
     return 0x00000000u;
}

static inline const int hub(){
    float rvalue = 1;
    
    using namespace std::opcode;
   try{ 
    static int er;
    
    static std::opc::Vector *vec = new Shapes(er);
    
    static Shapes shape(er);
    
    (*vec).quit  = false;
    
    vec->git();
    
    shape.operator()("David Ansong");
    
    printf("%s\n%s", typeid(vec).name(), typeid(*vec).name());
    
    PRINT_TO_SCREEN("\n%s", std::opcode::Vector::what());
    
    delete vec;
    
    (1 == 2)?printf("Welcome to back from break..."):puts("\nHello, World...");
    
    throw 404;
   }
   catch(int e){
       std::cout<<e<<endl;
       
        goto out;
   }
out:   
    int value;
    switch(value = (int)rvalue){
        case 101:
        case 102:
        case 65:
           cout<<"Please wait a moment while the session starts..."<<endl;
        break;
       default:
        do{
            puts("Service not available at this time...");
        }while(rvalue < 2);
    }
    return 0;
}
