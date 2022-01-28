#include <gui/button.h>

using namespace myos::common;
using namespace myos::gui;

//class Button
    //constructor
    Button::Button(Widget* parent, 
        common::int32_t x, common::int32_t y, common::int32_t w, common::int32_t h, 
        common::uint8_t r, common::uint8_t g, common::uint8_t b
    )
    //call base constructor
    : CompositeWidget(parent, x,y, w,h, r,g,b)
    {
        Dragging = false;
    }

    //destructor
    Button::~Button(){

    }

    /*void Button::Text(char letter)
    {
        
    }*/

    void Button::OnMouseDown(common::int32_t x, common:: int32_t y, common::uint8_t button){

        //true only if left click
        Dragging = button == 1;

        CompositeWidget::OnMouseDown(x,y,button);
    }

    void Button::OnMouseUp(common::int32_t x, common:: int32_t y, common::uint8_t button){
        Dragging = false;
    }

    void Button::OnMouseMove(common::int32_t oldx, common:: int32_t oldy, common::int32_t newx, common:: int32_t newy){
        if(Dragging){
            this->r = 0x79;
            this->g = 0x79;
            this->b = 0x79;
        }
        CompositeWidget::OnMouseMove(oldx,oldy,newx,newy);
    }