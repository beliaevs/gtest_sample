#include<iostream>
#include<gtest/gtest.h>
#include<gmock/gmock.h>

int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    testing::InitGoogleMock(&argc, argv);
    auto ret = RUN_ALL_TESTS();
    return ret;
}