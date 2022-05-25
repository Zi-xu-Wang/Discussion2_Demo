#include <iostream>
#include "src/lib/cpplib.h"

int main() {
  CPPLib s;
  std::cout<<s.PrintHelloWorld()<<std::endl;

  // Test for q1
  // std::vector<int> input = {1,2,3,4,5};
  // std::cout << s.Findmax(input) << std::endl;

  // Q5
  // std::cout << s.FindmaxR(input, 0, input.size()) << std::endl;

  // Q6
  // s.PrintIntro();
  
  return 0;
}