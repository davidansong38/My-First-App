#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<typeinfo>

using namespace std;

/*#pragma once*/

#ifndef __cplusplus
#define __cplusplus
#endif//__cplusplus

#ifdef __cplusplus
extern "C"{
#endif//__cplusplus
    
    #undef __start_main
    #define __start_main main
    
    #ifdef __start_main
    #define BEGIN_CODE {
    #define END_CODE }    
    #else
    #define MBR 512
    #define MeBx "This configuration is initializing...."
    #endif//__start_main
    
    #define status_exit_code ~(!(0x00))
    #define EXIT 00
    
  #if status_exit_code == ~(!(0x00))
    #define __callback_main
    #define __stdcel __callback_main
    #define __codecl __stdcel
  #elif EXIT != 00
    #define message_user 1
  #else
    #define SHA391 "User Name : 112jjdkkkd && User Password :8eei3olos0"
    #define MD3(SHA391) 
    #endif//status_exit_code
    
    #ifndef __start_main
    #line 17 "main.cpp"
    //#error A++ Please a Macro has not being defined by the standard
    #endif//__start_main
    
    #ifndef PRINT_TO_SCREEN
    #define PRINT_TO_SCREEN printf
    #define print_to_console(output) std::cout<<output<<std::endl
    #else
    #define shnt  0x0001
    #define DVD_BEEP(shnt) 
    #endif//PRINT_TO_SCREEN
    
    typedef int int32_t;
    typedef char *PCHAR, **pchar;
    typedef int32_t *pint32_t, **pint_32;
    typedef int32_t (*func_pointer)(int, ...);

#ifdef __cplusplus
}
#endif//__cplusplus

namespace std{
 namespace HCOML{
    template<class H_N, typename H_ID = unsigned int, class H_VOLT = float>
    class HCL{
        private:
          H_N hName;
          H_ID hID;
          H_VOLT hVoltage;
          H_N *hN;
        public:
          HCL(H_N hNm = "Not Available", H_ID hID = 0, H_VOLT hVolt = 0.000);
          
          virtual ~HCL();
          
          inline const string what(string s = "")const{
               
               return s; 
          }
          
         inline void operator()(string s = "POP3"){
             std::cout<<s<<endl;
         }
     };
     
    using namespace std::HCOML;
     
  template<class H_N, typename H_ID, class H_VOLT>
  class HCLi : protected HCL<H_N, H_ID, H_VOLT>{
      private:
       HCL<string> hcl;
       signed int count;
      public:
       virtual void list(){
          hcl = HCL<string>("Still not available", 91, 11);
          
           hcl.what("Printing...........");
        }
        virtual ~HCLi(){}
        
        HCLi& hcll(HCLi& h){
            if(this == &h){
                printf("Nice\n");
            }
            else{
                
            }
            return *this;
        }
        
        void operator++(int);
        
  };
  template<class H_N, typename H_ID, class H_VOLT>
void HCLi<H_N, H_ID, H_VOLT>::operator++(int a){
            
            this->count = -12;
            
            this->count += a;
            
            printf("%d", (*this).count);
            return;
        }
 }
namespace HCML = HCOML;
}
namespace stdhcl = std;

template<class H_N, typename H_ID, class H_VOLT>
stdhcl::HCOML::HCL<H_N, H_ID, H_VOLT>::HCL(H_N hNm, H_ID hID,
 H_VOLT hVolt)
: hName{hNm}, hID(hID)
{
    hVoltage = hVolt;
    hN = new H_N(hName);
}

template<class H_N, typename H_ID, class H_VOLT>
stdhcl::HCOML::HCL<H_N, H_ID, H_VOLT>::~HCL(){delete hN;}


extern const int send_message(const char*, ...);

static  void add(const int, const int, ...);
static  void add(double, double, ...);
static  float add(float, float, ...);


using namespace std::HCOML;
     
static int sub(int, ...);

template<typename TYPE>
TYPE* execv(unsigned int);


typedef struct __CODE{
    int (*func)(short int, long u);
    int data1;
    union{
        int* node;
        int data : 1;
    };
}Code, *PCODE, **PTCODE;

static double glob = 0;

int glt(short int a, long u){
    
    
    a += u;
    
    std::cout<<a<<std::endl;
    
    return (int)glob;
}

enum  Color{
    White,
    Blue
}col;

static struct __CODE* cod = new struct __CODE;




int32_t __callback_main __codecl __stdcel __start_main(int argc, PCHAR argv[])
{
 try{
     col = White;
     if(col == White){
         std::cout<<"Done "<<std::endl;
         switch(col){
             case 00:
              printf("Food");
              break;
             default:
              std::cout<<"Good"<<endl;
         }
     }
     cod->data1 = 2;

    cod->node = (int*)(*cod).data1;
    
    printf("%i", cod->node);
    
 //template<class H_N, typename H_ID, class H_VOLT>
  static stdhcl::HCOML::HCLi<string, unsigned int, double> hcli;
  
  hcli.list();
  
  stdhcl::HCML::HCL<std::string>* hcl = new stdhcl::HCML::HCL<string>();
   
   stdhcl::HCML::HCL<std::string> hccl("", 99, 0);
   
   string s1 = "This is Windows...";

   print_to_console("Welcome Back.....");
    
   print_to_console(s1);
   
   hccl("IMAP");
   
   hcli.hcll(hcli);
  
  Code c;
  
  PCODE code = (PCODE)&c;
  
  (*code).func = glt;
  
  code->func(12, 9);
  
  stdhcl::HCML::HCL<std::string>& hc = *hcl;
  
  
   
   add(1,11);
   
  if(argc == 1 | argc < 2){
        PRINT_TO_SCREEN("Please insert a commandline argument....");
    }
   else if(argc == 2){
       char n;
       n = '\n';
       PRINT_TO_SCREEN("%c", n);
       /*scanf("%c", &n);
       std::cin>>n;
       */
       //PRINT_TO_SCREEN("");
   }
   else{
        goto out;
    }
  
    unsigned int* s = (unsigned int*)execv<void>(81);
    
    unsigned int es = *s;
    
    std::cout<<es<<std::endl;
  
  delete hcl;
  
  throw new stdhcl::HCML::HCL<std::string>;
 }
 catch(stdhcl::HCML::HCL<std::string>* hcl){
         cout<<(*hcl).what("\nA new Exception occured.....")<<endl;
 }
 out:    
    return status_exit_code;
}


void add(const int x, const int y, ...){
    
    unsigned int result = 1, *rst;
    
    result += (unsigned int)x-y;
    
    rst = &result;
    void** rstt = (void**)&rst;
    
    int** nrst = (int**)rstt;
    
    PRINT_TO_SCREEN("Address of result is %p and value is %i\n", &result, *rst);
    
    func_pointer fp;
    
    fp = sub;
    
    fp(8);
    
    return;
}

template<class TYPE>
TYPE* execv(unsigned int see){
    
    TYPE* vid;
    
    vid = &see;
    
    return vid;
}

static int sub(int u, ...){
    
    short result = static_cast<short>(u-2);
    
    char hsingle = '\t';
    printf("%i%c", result, hsingle);
    
    return 00;
}



