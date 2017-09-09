#include <gtest/gtest.h>

TEST(hello, travis)
{
    const auto hello = 1;
    const auto travis = 2;
    const auto hello_travis = 3;
    EXPECT_EQ(hello+travis, hello+travis);
}