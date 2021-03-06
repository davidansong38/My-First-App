#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define system_time __TIME__
#define USRNAME 000010001<<01
#define USERNAME 0x01>>00010010

typedef char user_name[USRNAME];
typedef signed long usrbackup_recovery_pswd;
typedef char *usr_recovery_email;
typedef char *usr_name;

#undef bool
#define bool unsigned char
#define false 00
#define true 0x00000001U
#define nullptr 0x00L
#define MBR 512

struct PCB;
struct GDT;
union System_MMU;

typedef struct Local_Security{
   user_name usrname;
   char* usr_pswd;
   usrbackup_recovery_pswd usrb_recpswd;
   usr_recovery_email usr_rec_email;
   union __System_Permissions{
       signed write_file;
       unsigned read_file;
       unsigned short execute_file;
   }sys_permission;
}local_security, *LocalSecurity, **lsecurity;

static struct Local_Security system_sec = {.usrname = "Admin", .usr_pswd = "XQBLNCEEK1992",12991102111221 , "dansong14@gmail.com.david"};

static inline void* lclsecurity(void*, ...);

typedef unsigned long PID;
typedef float cpu_spd_on_ech_process;
typedef char *process_name;
typedef char process_mem_sz;
typedef signed short process_uid;

struct PCB{
  PID process_id;
  cpu_spd_on_ech_process process_spd;
  process_name prc_name;
  process_mem_sz prc_mem_sz;
  union{
    process_uid puid;
  }proc_uid;
};

typedef unsigned int memory_state;
typedef int memory_size;
typedef double memory_speed;
typedef long total_address_space_in_mem;

typedef struct Core_dump{
  memory_state *mem_state;
  memory_size mem_sz;
  memory_speed mem_speed;
  total_address_space_in_mem tadd_spcmem;
}core_dump, *CoreDump, **coredump;

typedef char *Page_Mode;
typedef char *Frame_Mode;

union System_MMU{
  Page_Mode pmode;
  Frame_Mode fmode;
};

typedef char cpu_mode[120];
typedef unsigned cpu_state_id;
typedef unsigned cpu_total_state;
typedef float cpu_speed;

struct cpu_state{
  cpu_mode cpumode;
  cpu_state_id cpustid;
  cpu_total_state cputtstate;
  cpu_speed cpspeed;
};


typedef struct __GDT{
  struct PCB* process_board;
  CoreDump cdump;
  union System_MMU sys_mmu;
  struct cpu_state cpu_sttate;
}GDT, *SYS_GDT, **SYSTEM_GDT;

static inline int sys_security(usr_name username, const char* usr_rec_email, char nl, usrbackup_recovery_pswd usrbrec_pswd, ...){
   
   printf("User name : %s\nEmail : %s%cPassword : %ld\n", username, usr_rec_email, nl, usrbrec_pswd);

   return 0;
}

static inline int run_cpu(int, struct Local_Security*, ...);

static inline void end_file();

static inline const unsigned int sysm(int);

extern inline const struct __GDT *global_des_table(const SYS_GDT, ...);

int main(void){
  system_sec.sys_permission.write_file = 0xac;
  system_sec.sys_permission.read_file = 0010;
  system_sec.sys_permission.execute_file = 0x6;

  static  LocalSecurity lsec;
  lsec = &system_sec;

  static const char* const sys_time = system_time;
  
  printf("System time is %s", sys_time);
  printf("%c", '\n');
  
  lclsecurity(lsec);
  sysm((int)system_sec.sys_permission.write_file);

  return 00;
}

void* lclsecurity(void *lsec, ...){

  static lsecurity lsecure;
  lsecure = (lsecurity)&lsec;

  static struct Local_Security* loclsec;
  loclsec = *lsecure;

  run_cpu(sys_security(loclsec->usrname, (*loclsec).usr_rec_email, '\n', loclsec->usrb_recpswd), loclsec);

  return lsec;
}

void end_file(){
  const char end[] = "File was unable to finish completion as a result of insufficient memory in the system.....";

  printf("%s", end);
  
  return;
}

int run_cpu(int sys_sec, struct Local_Security* lcalsec, ...){
  bool quite = false;
  //const
  const char* install_program;
  char sys_fin_installation[MBR];
  static FILE *file;
  sys_sec = 1;
  //char *sys_usr_email = lcalsec->usr_rec_email;
  //char* receive_email = strcat((char*)install_program, //sys_usr_email);


  if(sys_sec == 0){
    puts("\nAuthentication confirmed!!!");
    quite = true;
    goto exit;
  }
  else if(sys_sec > 0){
    file = (FILE*)malloc(sizeof(file));
    
    if(file == nullptr){
      end_file();
    }
    else{
      install_program = "Installing device driver using redirection from file.......\n";

      file = fopen("System_backup.dav", "w");
      fprintf(file, "%s", install_program);
      
      goto print_file;
    }
  }
  print_file:
     fscanf(file, "%s", sys_fin_installation);
     printf("%s", sys_fin_installation);
     goto ext;

  ext:
    fclose(file);
    free(file);
    goto exit;

  exit:
    return 0x0000u;
}

#define HINT 0xac
#define snd_task puts

const unsigned int sysm(int jump){

  switch(jump){
    case 0x0001:
    case HINT:
     puts("Access Granted to read a single file at a time...");
     break;
    case 0100:
    case 0x90:
    case 2332:
     printf("Access Granted to read multiple files at different times...");
     break;
    case 0x666:
    case 0x720:
     printf("Access && Authorization granted to read and write files with execute permission....");
     break;
     case 0x0012:
      snd_task("Access & Authorization denied. Declaimer!!!";
      break;
    default: 
     puts("System offline for the moment....");
  }
  return 0;
}
