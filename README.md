
# Discussion2 Demo

## Question 1 

**Findmax function:**

- Example1: 

  Input: [1, 2, 3, 4, 5]

  Output: 5

- Example2:

  Input: [1, 1, 1, 1]

  Output: 1

**Solution:** 
```cpp
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
```

## Question 2 (20 Points. Medium)

Write a function called **FindMedium**, which returns the medium of the inputs of a vector of integers. Use the steps the following steps:
1. Clearly specify input and output.
2. Write some example input and outputs. Try to cover corner cases. Feel free to make reasonable assumptions for the corner cases.
3. Implement your algorithm.
4. Write several unit tests that cover all corner cases, and test your algorithm using bazel.
You will need to only submit your algorithm implementation and the unit tests.

## Question 3 (20 Points. Medium)

Compute the worst case run-time complexity of the below functions. Please provide both the computation process and final result for full credit.

```cpp
void Example1(int n) {
   int i = 1;
   while (i < n) {
       i *= 2;
   }
}
```

Answer:

```cpp
void Example2(int n) {
   int count = 0;
   for (int i = 1; i <= n; i = i * 2) {
       for (int j = 1; j <= n; j++) {
           for (int k = 1; k <= n; k = k * 3) {
               count++;
           }
       }
   }
}
```

Answer:

```cpp
void Example3(int n) {
   int count = 0;
   for (int i = 0; i < n; i++)
       for (int j = i; j < i*i*i; j++)
            std::cout<<"*";
}
```

Hint: Note the ```j < i*i*i``` in the inner loop and compute the cube sequence to get the final result.

Answer:

```cpp
int Example4(int n) {
   int count = 0;
   for (int i = 1; i < n; i *= 3) {
      for (int j = n; j > 0; j /= 3) {
          for (int k = 0; k < j; k++) {
              count += 1;
          }
      }
   }
   return count;
}
```

Hint: Note the ```i /= 3``` in the outer loop and compute the geometric sequence to get the final result.

Answer:

## Question 4 (10 Points. Easy)

Write a function **StrManipulate** to manipulate the input string so that the case of each character of the string is selected randomly. For example, the input string is `random`, possible outputs can be `rAnDom`, `RAndOM` or `rANdOm`. 


## Question 5 (15 Points. Easy)

Write a simple function ```std::string CPPLib::PrintIntro()``` in [cpplib.cc](src/lib/cpplib.cc) to print your name, email, and any information about your programming experiences (e.g. names of the programming languages you have ever learned, their advantages and/or disadvantages in your opinion; If you have no prior programming experience, simply print `N/A`) and write a test using GTest for your function in [tests/q5_student_test.cc](tests/q5_student_test.cc). We will run your code and see your printout!

Please create your test cases and run the following command to verify the functionality of your program.

```bash
bazel test tests:q5_student_test
```

## Question 6 (25 Points. Medium)

 Write a function ```std::vector<int> CPPLib::Flatten3DVector(const std::vector< std::vector< std::vector<int> > > &input)``` in [cpplib.cc](src/lib/cpplib.cc) to flatten a 3D vector into a 1D vector.

Example:\
Input: inputs = [[[1, 2], [3, 4]], [[5], [6], []], [[7, 8]]].\
Output: result = [1, 2, 3, 4, 5, 6, 7, 8].

Write several tests using GTest for your function in [tests/q6_student_test.cc](tests/q6_student_test.cc).\
(Hint: include cases with empty vectors)

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q6_student_test
```
What is the worst case runtime complexity of your implementation?

Answer:

## Question 7 (30 Points. Medium)

Write a function ```int CPPLib::climbStairs(int n)``` in [cpplib.cc](src/lib/cpplib.cc) using recursion to find how many distinct ways you can climb to the top. Your function should accept positive numbers less than 45 and return the number of ways. Further, write several tests using GTest for your function in [tests/q7_student_test.cc](tests/q7_student_test.cc) and compute the time complexity of your implementation.

*Rules of the climb stairs*\
You are climbing a staircase. Each time you can either climb 1 or 2 steps. It takes n steps to reach the top.

If there are 0 stairs, there is 0 way to the top. For negative input, please return -1.

For example, if the stairs number is 4(n = 4), it should have 5 ways to the top.\
1 + 1 + 1 + 1\
1 + 1 + 2\
1 + 2 + 1\
2 + 1 + 1\
2 + 2

Please create your test cases and run the following command to verify the functionality of your program.

```bash
bazel test tests:q7_student_test
```
**Hint**: Try to write a recursive relationship.
What is the complexity of your implementation?

Answer:
