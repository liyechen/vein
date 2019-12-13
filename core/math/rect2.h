//
// Created by haduluoke on 12/13/19.
//

#ifndef VEIN_RECT2_H
#define VEIN_RECT2_H

#include "vector2.h"

namespace vein {
    // point x & y
    // size width & height
    struct Rect2 {

        // position & size
        Point2 position;
        Size2 size;

        Rect2() = default;

        Rect2(float x, float y, float width, float height) :
            position(Point2(x, y)),
            size(Size2(width, height)) {
        }

        Rect2(const Point2& r_pos, const Size2& r_size) :
            position(r_pos),
            size(r_size) {
        }

        inline float get_area() { return size.width * size.height; }
    };
}

#endif //VEIN_RECT2_H
