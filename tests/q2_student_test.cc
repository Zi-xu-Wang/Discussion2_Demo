// NOTE: Add your own q2 tests in this file
#include "src/lib/cpplib.h"


#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q2_Student, Findavg_Test_1) {
  CPPLib s;
  std::vector<int> input = {1,2,3,4,5};
  double exp = 3;
  double act = s.Findavg(input);
  EXPECT_EQ(exp, act);
}