// NOTE: Add your own q1 tests in this file
#include "src/lib/cpplib.h"

#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q1_Student, Findmax) {
    CPPLib s;
    std::vector<int> input = {1,2,3,4,5};
    int exp = 5;
    int act = s.Findmax(input);
    EXPECT_EQ(exp, act);
}