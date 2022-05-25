#include <iostream>
#include "src/lib/cpplib.h"

int main() {
  CPPLib s;
  // Test for q1
  std::vector<int> input = {1,2,3,4,5};
  std::cout << s.Findmax(input) << std::endl;
  
  return 0;
}