//
// Created by haduluoke on 12/12/19.
//

#include "gtest/gtest.h"

class MathFixture : public ::testing::Test {
protected:
    virtual void TearDown() {}
    virtual void SetUp() {}

public:
    MathFixture() : Test() {

    }

    virtual ~MathFixture() {}
};
