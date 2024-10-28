# CISC2200 Fall 2024 Lab5

In this lab assignment, we practice **working with dynamic arrays**,
**working with class template**, and **understanding testcases**,
and finishing the **sortedList** implementation.

Note that this is labelled as **Lab5**,
but it is actually the **fourth lab** of the semester.

## Download starter code

From your terminal (mac or WSL/Ubuntu) window,
you can use the following command to download it:

```bash
git clone https://github.com/CISC2200-Fall-24-Fordham/Lab5.git
```

## Programming Environment Setup

If you haven't done so already, please set up programming environment
your own computer, by following [Setup Tutorial](https://eecs280staff.github.io/tutorials/).

- The _Commannd Line Tools_ are required.

- The _C++ Dev Environment_ (VSCode) is highly recommened.

**Please follow these tutorials closely and carefully.**

## Requirements

Please implement the following member functions in the **AList.h**.

1. Implement **remove(i)** member function of **SortedAList**.
2. Implement **put(ItemType item)** member function of **SortedAList**.
You can use the **binary_search_insertpos** function (given in the slides)
to find the insertion point, or use simple linear search.
3. Understand how **binary_search** works (by using VSCode debugger),
and use it to implement **find** member function.
4. (Optional) Test your functions by adding more testcases scenarios to **main.cpp**.

## Hints

You may want to create your own doctest based tests to aide in debugging / testing
your implementation.
Consult the Project for reference implementations of tests with doctest.

## Submission

Submit your **SortedAList.h** file at the following link by
Wednesday Nov 6th, midnight (11:59pm).
[Lab5 submission link](https://storm.cis.fordham.edu:8443/web/project/1954)

The autograder compiles and tests your programs using
some testcases that are different from those in **main.cpp**. If your program
fails some testcases, go back to review your code, and test your member functions
with different inputs.
