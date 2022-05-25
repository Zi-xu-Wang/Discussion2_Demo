#ifndef TEMPLATE_CPPLIB_H
#define TEMPLATE_CPPLIB_H

#include <string>
#include <vector>

/**
 *  Example class used for GTest demo
 */
class CPPLib {
 public:
  std::string PrintHelloWorld();


  // Q1:
  int Findmax(std::vector<int> &input);

  // Q2:
  double Findavg(std::vector<int> &input);

  // NOTE: write your own function declaration Q3 here

  // NOTE: write your own function declaration Q4 here

  // NOTE: write your own function declaration Q5 here

  // NOTE: write your own function declaration Q6 here

  // Print your self-introduction
  std::string PrintIntro();
  
  private : 
};

#endif
