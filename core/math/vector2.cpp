#include "vector2.h"

namespace vein {

/**
 * constructor
 * (0.0, 0.0)
 */
    Vector2::Vector2() {
        x = 0.0;
        y = 0.0;
    }

/**
 * constructor with init
 * (x, y)
 */
    Vector2::Vector2(float xx, float yy) {
        x = xx;
        y = yy;
    }

/**
 * constructor from Vector2
 */
    Vector2::Vector2(const Vector2 &c) {
        x = c.x;
        y = c.y;
    }
}
