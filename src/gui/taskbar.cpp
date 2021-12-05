#include <gui/taskbar.h>

using namespace myos::common;
using namespace myos::gui;

//class Taskbar
    //constructor
    Taskbar::Taskbar(Widget* parent, 
        common::int32_t x, common::int32_t y, common::int32_t w, common::int32_t h, 
        common::uint8_t r, common::uint8_t g, common::uint8_t b
    )
    //call base constructor
    : CompositeWidget(parent, x,y, w,h, r,g,b)
    {}

    //destructor
    Taskbar::~Taskbar(){

    }