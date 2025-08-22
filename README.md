# Cpp_Experiment_10_Call_by_Value_-_Reference

## Aim

To study and implement different ways of calling functions in C++:

Call by Value

Call by Reference (using pointers)

Pass by Reference (using references in C++)

## Objectives

To understand how data is transferred between functions.

To differentiate between call by value, call by reference, and pass by reference.

To observe how changes inside a function affect or do not affect actual variables.

To develop a clear idea about memory management during function calls.

## Theory

In programming, functions allow us to divide a large program into smaller, manageable blocks. They help in code reusability, readability, and debugging. But when data is passed to a function, there are different ways in which it can be handled.

### Call by Value

In this method, the copy of the actual parameter is passed to the function.

Changes made inside the function affect only the copy, not the original variable.

Memory is allocated separately for actual and formal parameters.

Example: swapping two numbers using call by value will not change the actual values.

### Call by Reference 

Here, the address (memory location) of the actual variable is passed.

Formal parameters become pointers to actual parameters.

Any change inside the function directly modifies the original variable.

Useful when we want the function to update the caller’s data.

### Pass by Reference 

A reference variable is like an alias for another variable.

The function receives a reference, not a copy, so operations affect the original variable.

It is simpler and safer compared to pointers.

Often used in C++ for efficiency and avoiding unnecessary memory copies

#### Comparison Table

| Method              | What is Passed?      | Changes Affect Original? | Memory Used | Safety & Simplicity |
|---------------------|----------------------|---------------------------|-------------|----------------------|
| Call by Value       | Copy of variable     |     No                     | More        | Very safe            |
| Call by Reference   | Address              |     Yes                    | Less        | Needs pointer care   |
| Pass by Reference   | Reference            |     Yes                    | Less        | Simple & efficient   |

## Program Description

We performed three programs under this experiment. Each program is designed to highlight the behavior of parameter passing in different function calling methods.

### Call by Value

A function is written to swap two numbers.

The function receives only the copy of the actual values.

Inside the function, values are swapped successfully, but the changes do not reflect in the original variables of the main() function.

This demonstrates that only local copies are affected.

### Call by Reference (using Pointers)

A function is written to swap two numbers using pointers.

Instead of passing the values, we pass the addresses of variables.

Inside the function, the pointers directly access the original variables and perform the swap.

After returning from the function, the original values in main() are also swapped.

This shows how direct memory access allows permanent changes.

### Pass by Reference (using References in C++)

A function is written using reference variables.

Reference variables act like an alias (another name) for the original variables.

When passed to a function, any modification is directly applied to the original variables.

Unlike pointers, reference syntax is simpler and safer, as there is no need to explicitly dereference or use * operators.

The output confirms that the original variables are permanently modified.

### Overall Observation

Call by Value → No effect on actual variables.

Call by Reference → Original values modified through pointers.

Pass by Reference → Original values modified using reference variables, with simpler syntax.

The programs collectively show how parameter passing techniques affect data sharing between functions.

## Concepts Used

Functions in C++

Function parameters and return types

Pointers and memory addressing

Reference variables in C++

Difference between formal parameters (inside function) and actual parameters (in main function)

## Conclusion

From this experiment, I understood the difference between Call by Value, Call by Reference, and Pass by Reference.

Call by Value is safe but does not allow the function to change original values.

Call by Reference allows the function to directly modify the caller’s data, but it requires careful pointer handling.

Pass by Reference  achieves the same as pointers but with a cleaner and more readable syntax.

> This shows that the method of passing parameters directly affects whether changes made in a function are reflected in the original variables or not.
