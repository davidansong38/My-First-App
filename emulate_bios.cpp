#include"main.h"

namespace std{
 namespace __FileSystem__{
 template<typename FILE_ADDRESS, class FILENAME = string, typename FILE_INDEX = unsigned int, int32_t default_file_inode = 0>
  class FileSystem{
    private: 
     FILE_ADDRESS faddress;
     FILENAME filename;
     FILE_INDEX findex;
     FILE_ADDRESS* faddr;
    public:
     __callback_event_handler FileSystem(FILE_ADDRESS file_address = "0x00000000000", FILENAME fname = "Nothing to stored yet.", FILE_INDEX findex = 01):faddress(file_address), filename(fname){
       findex = findex;
       faddr = new FILE_ADDRESS(findex);
     }
    virtual ~FileSystem();
  };
 }
namespace filesystem = __FileSystem__;
}
namespace stdsystem = std;

 template<typename FILE_ADDRESS, class FILENAME, typename FILE_INDEX, int32_t default_file_inode>
stdsystem::filesystem::FileSystem<FILE_ADDRESS, FILENAME,FILE_INDEX,default_file_inode>::~FileSystem(){
  delete findex;
}
extern inline void show_message(void);

const char* const print_system(const char* dispatch,...){

 return dispatch;
}

struct Main;

typedef struct __BIOS{
 static struct Main* system_main;
}BIOS, *PBIOS, **PTBIOS;


struct Main{
public:
  std::string sys_time;
  unsigned int system_board_id : 1;
  unsigned processor_speed : 7;
  int : 0;
  struct Main* sys_main;
public:
 struct{
   union{
   signed int ram_size;
   char* ram_speed;
  }ram_spec;
 }ram_1;
};

static struct __BIOS syst_main;
static struct Main smain;

int main(int argc, PCHAR argv){
  
  const char* const send = print_system();
  
  std::cout<<send<<std::endl;

  syst_main.system_main->sys_main = &smain;
  syst_main.system_main->sys_main->system_board_id = 1;

  return 0x0000u;
}
