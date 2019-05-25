#include"system_boot.h"
#ifndef __cplusplus 
#error A++ Please a macro has not being defined by the standard\ ISO C++ or ANSI C
#line 7 __FILE__
#endif//__cplusplus

#define DISPLAY_TO_SCREEN_ON_START_UP printf
#define PRINT_TO_SCREEN_ON_REBOOT(reboot)\ std::cout<<reboot<<std::endl
#define __callback_main 
#define __stdcel 
#define __codcel __callback_main
#define sys_id 255
typedef char *cpu_id;
typedef cpu_id system_ram, system_type;
typedef int cpu_entity;

struct BIOS;

typedef struct __boot_bios_main{
  std::string sys_time;
  char* bios_version;
  cpu_id cpu_idsys;
  std::string number_cache;
  char system_id[sys_id];
  char* system_manufacturer;
  char* system_date_manufacturing;
  cpu_entity number_cpu;
  union{
     system_ram ram_size;
  }rm;
  struct __boot_bios_main *bootsystem;
}boot, *Boot, **_BOOT;

struct BIOS{
  boot *btsystem;
};

static struct BIOS bios1;

static struct BIOS* bios;

static inline const void __codcel booting_system(const char*, ...);
static bool sys_boot(struct __boot_bios_main* bbiosmain, ...){
  using namespace std;
  static char* btime = "System time is ";
  cout<<'\n'<<btime<<(*bbiosmain).sys_time<<endl;

  return true;
}
__callback_main int32_t __stdcel main(int32_t argc, pchar32_t argv[]){
try{
  static boot btoot = {__TIME__, "Bios version 1.0.01.1", "Intel x86-64 Dual Multi-processor/core 3.0GHz 1800+1", "Number of Caches  3", "19002AACVBX00PCDS", "Cyber Peace && Secret Intelligence", "21/01/2005", 2, .rm.ram_size = "1280MB/1.25GB"};

  const char startup[BOOT] = "System starting...........";
  bios1.btsystem = &btoot;
  bios1.btsystem->bootsystem =  &btoot;

  booting_system(startup);
  sys_boot(&btoot);
  io(new io_subsystems<>("Installing all drivers...."));

  
}
catch(){
  
}
catch(...){

}
  return 00l;
}

const void booting_system(const char *const start_computer, ...){
  
  DISPLAY_TO_SCREEN_ON_START_UP("%c%s", '\n', start_computer);

  return;
}

io_subsystems<std::string>& io(io_subsystems<>*s_io){

  
  return *s_io;
}
