#include<gtest/gtest.h>
#include<gmock/gmock.h>
#include "mylib.h"

TEST(mylib, test1)
{
    EXPECT_EQ(f(), 42);
}