#include"main.h"

namespace KERNEL_OS{
 namespace KL_OS{
   using namespace std;
   template<typename KERNEL_NUMBER, class KERNEL_VERSION = string, unsigned int KERNEL_BUILT_ID = 12201>
   class SYSTEM_KERNEL{
      private:
        KERNEL_NUMBER kernel_n;
        KERNEL_VERSION kernel_v;
      private:
        unsigned int KERNEL_ID;
      
      public:
       SYSTEM_KERNEL(KERNEL_NUMBER kernel_n = 9001, KERNEL_VERSION kn_v = "10.01.1.1")
       : kernel_n(kernel_n), kernel_v(kn_v){

        KERNEL_ID = KERNEL_BUILT_ID;

        std::cout<<"system in progress..."<<std::endl;

       }
      virtual ~SYSTEM_KERNEL();

      virtual const char* const what()const{
          return "System busy...";
     } 
   };
 }
namespace KLOS = KL_OS;
}
namespace KERN_OS  = KERNEL_OS;

template<typename KERNEL_NUMBER, class KERNEL_VERSION, unsigned int KERNEL_BUILT_ID>
KERN_OS::KLOS::SYSTEM_KERNEL<KERNEL_NUMBER, KERNEL_VERSION,KERNEL_BUILT_ID>::~SYSTEM_KERNEL(){}

#define BEGIN_CODE {
#define END_CODE }
#define RETURN return
#define status_exit_code ~(!(0x00))

extern KERN_OS::KL_OS::SYSTEM_KERNEL<int> sys_kernel;
