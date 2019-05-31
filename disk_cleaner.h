 #include"sys"
#undef __callback_event
#define __callback_event

#define Write 0x01

/*
#ifdef Write
extern "C"{ 
#endif//Write
*/

struct filesystem;

namespace std{
 namespace Disk{
   template<typename Disk_name, class Disk_size = long,  class SpaceUsedOnDisk = unsigned short, unsigned short Disk_space_used = 0>
   class Disk_Cleaner{
     private:
      mutable Disk_name diskName;
      Disk_size dsize;
      SpaceUsedOnDisk spacdisk;
      SpaceUsedOnDisk *sdisk;
     public:
      Disk_Cleaner(void) = default; 
      __callback_event Disk_Cleaner(Disk_name diskName, Disk_size dsz = 0x0000)
      :diskName(diskName), spacdisk(1024), sdisk(new SpaceUsedOnDisk[spacdisk]){
        dsize = dsz;
        std::string send_welcome = "System installing device driver for usb 1.0.....";

        std::cout<<send_welcome<<std::endl;

      }
     virtual __codecl ~Disk_Cleaner()__stdcel;

    public:
     const void syst()const{
       using namespace std;
       {
         try{
           Disk_Cleaner<std::string> *dcleaner;

           throw 404;
         }
         catch(int error){
          if(error == 0){
             cout<<error<<endl;
          }
          else if(error == 200){
             //getline(cin, error);
          }
          else{
           //do nothing
          }
         }
         catch(...){

         }
       }
     }
    
    public:
     static long double fin;
   };
template<typename Disk_name, class Disk_size,  class SpaceUsedOnDisk, unsigned short Disk_space_used>
long double std::Disk::Disk_Cleaner<Disk_name, Disk_size, SpaceUsedOnDisk, Disk_space_used>::fin = 0.00;

using namespace std::Disk;

struct filesystem : public Disk_Cleaner<string>{
   public:
    Disk_Cleaner<string> dkcleaner;
    filesystem(const Disk_Cleaner& dkcleaner) = delete;
};
 }
 namespace dsk = Disk;
}
namespace STD = std;

template<typename Disk_name, class Disk_size,  class SpaceUsedOnDisk, unsigned short Disk_space_used>
std::dsk::Disk_Cleaner<Disk_name, Disk_size, SpaceUsedOnDisk, Disk_space_used>::~Disk_Cleaner(){
   delete[] sdisk;
} 
 using namespace STD::dsk;

extern const std::dsk::Disk_Cleaner<std::string> diskclean = Disk_Cleaner<std::string>("USB 1.0");
