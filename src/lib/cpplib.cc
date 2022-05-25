#include "cpplib.h"
#include "limits"

std::string CPPLib::PrintHelloWorld() { return "**** Hello World ****"; }

// Q1: write your q1 function here
int CPPLib::Findmax(std::vector<int> &input){
    if(input.size() == 0){return 0;}
    int max = -INT_MAX;
    for(int i=0; i< input.size();i++){
        if (input[i] > max){
            max = input[i];
        }
    }
    return max;
}

// NOTE: write your own function declaration q2 here

// Question 5 Print your self-introduction
std::string CPPLib::PrintIntro() {
    // Please fill up this function.
    return "Hello everyone, welcome to C++!"; 
}


