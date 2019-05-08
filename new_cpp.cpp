#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<typeinfo>

using namespace std;

typedef int int32_t;

enum{
  Bulgatti = 01000001,
  RangeOver = 01000010,
  Cameri_Spider
}car;

class Vector;

//class B;

namespace std{
 namespace vec{
    class Vector{
        private:
         mutable unsigned int v_size;
         unsigned int* v;
        public:
         Vector() = default;
         Vector(int v_sz){
             v_size = static_cast<unsigned int>(v_sz);
             
             v = new unsigned int[v_size];
         }
        virtual ~Vector();
        
        void operator++() = delete;
        
         unsigned int& display(){
            
            return v_size;
        }
        
        const char* const what(char * mhip)const{
            
            return mhip;
        }
        
        Vector(const Vector& v){
            v.v_size = 14;
            
            v_size = v.v_size;
            
            std::cout<<v_size<<std::endl;
        }
        Vector& operator=(const Vector& vec){
            
            v = new unsigned int(v_size);
            
            
            
            return (Vector&)vec;
        }
        //friend class B;
    };
    
    
    class B{
        public:
        B() = default;
        
        static inline const void* git(){
            
            double g = 90.01;
            
            void *gt;
            gt = &g;
            
            return gt;
        }
         void dis(){
             B bay;
             
             double* v = (double*)bay.git(); 
             
             printf("%f", *v);
             
             return;
         } 
        ~B(){}
        
         //friend class Vector;
         
    };
 }
namespace vect = vec;
}
namespace stdl = std;

std::vect::Vector::~Vector(){delete []v;}


static std::vect::Vector vec1 = std::vect::Vector(12);

static int join(signed short, ...);

int32_t main(int argc, char* argv[]){
    
  try{ 
    
    static std::vect::Vector vc(vec1);
    
    //vc.display() = 90;
    
    stdl::vec::B bay;
    
    bay.dis();
    
    std::cout<<vc.display()<<endl;
    
    car = Cameri_Spider;
    
    int e;//This object or variable takes 4-bytes or 32-bits int value
    
    e = 404;
    
    if(car == Bulgatti){
        printf("Chosen car  is Bulgatti. %c", '\n');
    }
    else if(car == RangeOver){
        std::cout<<"Chosen car is Range Over"<<endl;
    }
    else{
        puts("No car was chosen...");
    }
    
    join(0x0002);
    
    throw e;
  }
  catch(int& err){
      //err is a reference object to e
      std::cout<<err<<std::endl;
      do{
        puts("Nothing..");
    }while(1 < 2);
  }
    return 0x00;
}


static int join(signed short st, ...){
    
    int i, j, k;
    
    signed short arr[st][2][3] = {{{1,2,3},{0,2,11}},
                                  {{1,2,3},{0,2,11}}
                                  };
    
    for(i = 0; i < st; i++){
     for(j = 0; j < 2; j++){
      for(k = 0; k < 3; k++){
          
          std::cout<<arr[i][j][k]<<endl;
      }
     }
    }
    
    
    return 00;
}
