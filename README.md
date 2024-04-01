# CISC2200 Spring 2024 Lab5

In this lab assignment, we practice **working with dynamic array**, **working with class template**,
and **understanding testcases**, and finish the **sortedList** implementation. 

## Download starter code

From your terminal (mac or WSL/Ubunto) window, you can use the following command to download it:
```
git clone https://github.com/CISC2200-Spring2024/lab5.git
```

## Programming Environment Setup
If you haven't done so already, please set up programming environment our our own computer, by following [Setup Tutorial](https://eecs280staff.github.io/tutorials/). 

- The _Commannd Line Tools_ are required. 

- The _C++ Dev Environment_ (VSCode) is highly recommened.

**Please follow these tutorials closely and carefully.**

## Requirements:

Please implement the following member functions in the **AList.h**. 

1. Implement **remove(i)** member function of **SortedAList**.
2. Implement **put(ItemType item)** member function of **SortedAList**.
3. Understand how **binary_search** works (by using VSCode debugger), and use it to implement **find** member function.
4. Test your functions by adding more testcases scenarios to **main.cpp**.
   
## Hints

The **main.cpp** provided in this repository uses **doctests.h** framework to write testcases for the **put** member function. 
Follow the example to test the **remove** member function. 


## Submission 

Submit your **SortedAList.h** file at the following link by April 9th, Tuesday, midnight (11:59pm).
[Lab5 submission link](https://storm.cis.fordham.edu:8443/web/project/1491)

The autograder compiles and tests your programs using 
some testcases that are different from those in **main.cpp**. If your program fails some testcases, go back to review your code, and test your member functions
with different inputs.
