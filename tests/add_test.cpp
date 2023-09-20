#include <gtest/gtest.h>
#include <add.h>

TEST(AddTest, TestIntegerAdder)
{
    const auto expected = 2;
    const auto actual   = add(1, 1);
    ASSERT_EQ(expected, actual);
}

TEST(AddTest, TestFloatAdder)
{
    const auto expected = 0.0;
    const auto actual   = add(0.0, 0.0);
    ASSERT_EQ(expected, actual);
}

TEST(AddTest, TestDoubleAdded)
{
    const auto expected = 1.0f;
    const auto actual   = add(0.0f, 1.0f);
    ASSERT_EQ(actual, expected);
}


