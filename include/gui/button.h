#ifndef __MYOS__GUI__BUTTON_H
#define __MYOS__GUI__BUTTON_H

#include <drivers/mouse.h>
#include <gui/widget.h>

namespace myos{
    namespace gui{
        class Button : public CompositeWidget{
            protected:
                bool Dragging;

            public:
                Button(Widget* parent, 
                    common::int32_t x, common::int32_t y, common::int32_t w, common::int32_t h, 
                    common::uint8_t r, common::uint8_t g, common::uint8_t b
                );

                ~Button();
                //void Text(char letter);
                void OnMouseDown(common::int32_t x, common:: int32_t y, common::uint8_t button);
                void OnMouseUp(common::int32_t x, common:: int32_t y, common::uint8_t button);
                void OnMouseMove(common::int32_t oldx, common:: int32_t oldy, common::int32_t newx, common:: int32_t newy);
        };
    }
}

#endif