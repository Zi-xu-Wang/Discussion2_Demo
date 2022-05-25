#include <iostream>
#include "src/lib/cpplib.h"

int main() {
  // Print Hello world!
  CPPLib s;
  std::vector<int> input = {1,2,3,4,5};
  std::cout << s.Findmax(input) << std::endl;
  
  return 0;
}