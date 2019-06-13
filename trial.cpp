#include<iostream>
#include<stdio.h>
#include<new>
#include<stdlib.h>
#include<typeinfo>


typedef int int32_t;

namespace std{
 namespace shell_gui_windows{
   template<class WINDOW_POS_X, typename WINDOW_POS_Y,
   typename WINDOW_WIDTH = signed int, class WINDOW_HEIGHT =  signed int, signed window_width = 0, signed window_height = 0>
   class Windows{
      private:
        WINDOW_POS_X wnd_pos_x;
        WINDOW_POS_Y wnd_pos_y;
        WINDOW_WIDTH wnd_width;
        WINDOW_HEIGHT wnd_height;
        char* window_title;
        WINDOW_WIDTH window_width_tracker;
        WINDOW_HEIGHT window_height_tracker;
      public:
        Windows() = default;
        Windows(WINDOW_POS_X wnd_pos_x, WINDOW_POS_Y wnd_pos_y, WINDOW_WIDTH wnd_w = window_width, WINDOW_HEIGHT wnd_h = window_height, char window_title[] = "Kylla");

        virtual ~Windows();

        virtual void* ShowWindow(Windows<float, double>*) = 0;
   };
 }
 namespace wnd_gui = shell_gui_windows;
}
namespace stdio = std;

template<class WINDOW_POS_X, typename WINDOW_POS_Y,
typename WINDOW_WIDTH, class WINDOW_HEIGHT, signed window_width, signed window_height>
std::wnd_gui::Windows<WINDOW_POS_X, WINDOW_POS_Y, WINDOW_WIDTH,WINDOW_HEIGHT, window_width, window_height>::Windows(WINDOW_POS_X wnd_pos_x, WINDOW_POS_Y wnd_pos_y, WINDOW_WIDTH wnd_w, WINDOW_HEIGHT wnd_h, char window_title[])
: wnd_pos_x(wnd_pos_x), wnd_pos_y{wnd_pos_y}, wnd_width(wnd_w){
      wnd_height = wnd_h;
      window_title = new char[20];
      window_title = window_title;
      window_width_tracker = new WINDOW_WIDTH[wnd_width];
      window_height_tracker = new WINDOW_HEIGHT[wnd_height];
}

template<class WINDOW_POS_X, typename WINDOW_POS_Y,
typename WINDOW_WIDTH, class WINDOW_HEIGHT, signed window_width, signed window_height>
std::wnd_gui::Windows<WINDOW_POS_X, WINDOW_POS_Y, WINDOW_WIDTH,WINDOW_HEIGHT, window_width, window_height>::~Windows(){
   delete window_title;
   delete[] window_width_tracker;
   delete[] window_height_tracker;
}   

using namespace std::wnd_gui;

namespace{
   template<class WINDOW_POS_X, typename WINDOW_POS_Y,
   typename WINDOW_WIDTH, class WINDOW_HEIGHT, signed window_width, signed window_height>
  class Window_Interface : public virtual Windows<WINDOW_POS_X, WINDOW_POS_Y>{
   private:
     void* ShowWindow(Windows<float, double> *wnd){
        
       /*printf("DKDIDD");*/

       return wnd;
     }
  };
}

#undef NULL
#define NULL 00

using namespace std::shell_gui_windows;

static Windows<float, double>* window = NULL;

int32_t main(int argc, char* argv[]){

  static ::Window_Interface<unsigned, signed, unsigned, signed,0,0> wInterface;

  //Windows<float, double>& windows = wInterface;

  printf("%s", __TIME__);

  return 0x00;
}
