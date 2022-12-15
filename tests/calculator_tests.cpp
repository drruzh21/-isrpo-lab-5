#include <lib/calculator.h>
#include <gtest/gtest.h>

TEST(GroupOfTests, SumTest){
    int val1 = 7;
    int val2 = 3;
    int expected = val1 + val2;
    int result = CalculateIt(val1, '+', val2);
    ASSERT_EQ(expected, result);
}


TEST(GroupOfTests, ReductionTest){
    int val1 = 7;
    int val2 = 3;
    int expected = val1 - val2;
    int result = CalculateIt(val1, '-', val2);
    ASSERT_EQ(expected, result);
}


TEST(GroupOfTests, MultTest){
    int val1 = 7;
    int val2 = 3;
    int expected = val1 * val2;
    int result = CalculateIt(val1, '*', val2);
    ASSERT_EQ(expected, result);
}


TEST(GroupOfTests, DivisionTest){
    int val1 = 9;
    int val2 = 3;
    int expected = val1 + val2;
    int result = CalculateIt(val1, '/', val2);
    ASSERT_EQ(expected, result);
}