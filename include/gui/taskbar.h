#ifndef __MYOS__GUI__TASKBAR_H
#define __MYOS__GUI__TASKBAR_H

#include <gui/widget.h>

namespace myos{
    namespace gui{
        class Taskbar : public CompositeWidget{

            public:
                Taskbar(Widget* parent, 
                    common::int32_t x, common::int32_t y, common::int32_t w, common::int32_t h, 
                    common::uint8_t r, common::uint8_t g, common::uint8_t b
                );

                ~Taskbar();
        };
    }
}

#endif