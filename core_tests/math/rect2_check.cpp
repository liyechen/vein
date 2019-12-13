//
// Created by haduluoke on 12/13/19.
//

#include "gtest/gtest.h"
#include "rect2.h"
#include "vector2.h"

using namespace vein;

TEST(RECT2, INIT) {
    Rect2 rect {};
    EXPECT_FLOAT_EQ(rect.position.x, 0.0);
    EXPECT_FLOAT_EQ(rect.position.y, 0.0);
    EXPECT_FLOAT_EQ(rect.size.width, 0.0);
    EXPECT_FLOAT_EQ(rect.size.height, 0.0);

    Rect2 rect2 { 1.3, 2.5, 10.0, 11.0 };
    EXPECT_FLOAT_EQ(rect2.position.x, 1.3);
    EXPECT_FLOAT_EQ(rect2.position.y, 2.5);
    EXPECT_FLOAT_EQ(rect2.size.width, 10.0);
    EXPECT_FLOAT_EQ(rect2.size.height, 11.0);

    Point2 pos { 3.1, 2.5 };
    Size2 size { 3.2, 4.6 };
    Rect2 rect3 { pos, size };
    EXPECT_FLOAT_EQ(rect3.position.x, 3.1);
    EXPECT_FLOAT_EQ(rect3.position.y, 2.5);
    EXPECT_FLOAT_EQ(rect3.size.width, 3.2);
    EXPECT_FLOAT_EQ(rect3.size.height, 4.6);
}

TEST(RECT2, GET_AREA) {
    Rect2 rect {};
    EXPECT_FLOAT_EQ(rect.get_area(), 0.0);

    Rect2 rect2 { 12.0, 23.4, 10.0, 11.0 };
    EXPECT_FLOAT_EQ(rect2.get_area(), 110.0);
}
