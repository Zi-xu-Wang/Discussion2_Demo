
# Discussion2 Demo

## Question 1 

**Findmax function:**

- Example1: 

  Input: [1, 2, 3, 4, 5]\
  Output: 5

- Example2:

  Input: [1, 1, 1, 1]\
  Output: 1

**Solution:** 
```cpp
int CPPLib::Findmax(std::vector<int> &input){
    if(input.size() == 0){return -1;}
    int max = -INT_MAX;
    for(int i=0; i< input.size();i++){
        if (input[i] > max){
            max = input[i];
        }
    }
    return max;
}
```

## Question 2 

**Findavg function:**

- Example1: 

  Input: [1, 2, 3, 4, 5]\
  Output: 3

- Example2:

  Input: [1, 1, 1, 1]\
  Output: 1


## Question 3 

**Findodds function:**

- Example1: 

  Input: [1, 2, 3, 4, 5]\
  Output: [1, 3, 5]

- Example2:

  Input: [1, 1, 1, 1]\
  Output: [1, 1, 1, 1]


## Question 4

**Findevens function:**

- Example1: 

  Input: [1, 2, 3, 4, 5]\
  Output: [2, 4]

- Example2:

  Input: [1, 1, 1, 1]\
  Output: []


## Question 5
**Findmax Recursion**

- Example1: 

  Input: [1, 2, 3, 4, 5]\
  Output: 5

- Example2:

  Input: [1, 1, 1, 1]\
  Output: 1

## Question 6: String Manipulation:

**PrintIntro function**
- Example:

  Input first name: Zixu\
  Input last name: Wang\
  Output: My full name is Zixu Wang;

**To lower case**
- Example:

  Input: MY NAME IS zixu.\
  Output: my name is zixu.

**To upper case**
- Example:

  Input: my NAME IS zixu.\
  Output: MY NAME IS ZIXU.

**To title case**
- Example:

  Input: HELLO\
  Output: Hello

**To random case**
- Example:

  Input: randomcase\
  Output: rAnDOMcAsE
