// NOTE: Add your own q1 tests in this file
#include "src/lib/cpplib.h"

#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q1_Student, Findmax_Test_1) {
    CPPLib s;
    std::vector<int> input = {1,2,3,4,5};
    int exp = 5;
    int act = s.Findmax(input);
    EXPECT_EQ(exp, act);
}

TEST(Q1_Student, Findmax_Test_2) {
    CPPLib s;
    std::vector<int> input = {};
    int exp = -1;
    int act = s.Findmax(input);
    EXPECT_EQ(exp, act);
}

TEST(Q1_Student, Findmax_Test_3) {
    CPPLib s;
    std::vector<int> input = {1,1,1,1};
    int exp = 1;
    int act = s.Findmax(input);
    EXPECT_EQ(exp, act);
}

TEST(Q1_Student, Findmax_Test_4) {
    CPPLib s;
    std::vector<int> input = {1,2,1,2,1,2,1};
    int exp = 2;
    int act = s.Findmax(input);
    EXPECT_EQ(exp, act);
}