#include <gtest/gtest.h>

TEST(HelloWorld, Pass)
{
    ASSERT_EQ(1, 1);
}

TEST(HelloWorld, Fail)
{
    ASSERT_EQ(1, 2);
}