#include <gtest/gtest.h>
#include <string>

using namespace std::string_literals;

TEST(hello, travis)
{
    const auto str = "Hello "s + "Travis"s;
    EXPECT_EQ(str, "Hello Travis");
}