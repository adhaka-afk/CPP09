# CPP09


## Description:

This module focuses on mastering the use of C++ Standard Template Library (STL) containers and algorithms through a series of exercises. Each exercise challenges you to apply different STL containers and operations efficiently. The primary goal is to enhance your familiarity with STL and enforce best practices when working with C++ containers.

## Module Rules:

- Mandatory Use of STL Containers: Every exercise requires the use of STL containers. Each exercise should use different containers, meaning once you use a container in one exercise, it cannot be used in subsequent exercises.
- Minimum Containers Required: Each exercise (except Exercise 02) requires at least one container. Exercise 02 specifically requires the use of two different containers.
- Error Handling: Your code must handle errors gracefully, providing appropriate error messages where necessary.
- Compilation: A Makefile must be provided for each exercise. The Makefile should compile the source files with -Wall, -Wextra, and -Werror flags. It should also include at least the following rules: $(NAME), all, clean, fclean, and re.
- Compiler: You must use the C++ compiler (c++) to compile your programs.
## Overview:

The module consists of three exercises:

## Exercise 00: Bitcoin Exchange
- Objective: Create a program that calculates the value of a certain amount of Bitcoin on a specific date using historical exchange rates.
  
**Key Features:**
- Program Name: btc
- Input: A CSV file containing dates and values in the format "date | value".
- Output: The result of multiplying the given value by the exchange rate on the corresponding date. If the date is not found, use the closest preceding date in the database.
- Validations: Ensure valid date formats and value constraints (positive integers/floats between 0 and 1000). Handle errors such as invalid dates or values with appropriate error messages.
- Container Requirement: Use at least one STL container to store and manage the data.

Example Usage:
 ```bash
./btc input.txt
# Example output:
# 2011-01-03 => 3 = 0.9
# 2011-01-03 => 2 = 0.6
# Error: not a positive number.

```
## Exercise 01: Reverse Polish Notation (RPN)
- Objective: Implement a program that evaluates a mathematical expression written in Reverse Polish Notation (RPN).
  
**Key Features:**
- Program Name: RPN
- Input: A mathematical expression in RPN passed as a command-line argument.
- Operations Supported: +, -, /, *
- Output: The result of the expression.
- Validations: Ensure that the expression is valid and handle errors such as division by zero, invalid tokens, or incorrect expressions.
- Container Requirement: Use at least one STL container to manage the RPN evaluation.

Example Usage:
 ```bash
./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
# Output: 42
```
## Exercise 02: PmergeMe
- Objective: Create a program that sorts a sequence of positive integers using the merge-insert sort algorithm (Ford-Johnson algorithm).
  
**Key Features:**
- Program Name: PmergeMe
- Input: A sequence of positive integers passed as command-line arguments.
- Output:
  - The unsorted sequence.
  - The sorted sequence.
  - The time taken to sort the sequence using the first container.
  - The time taken to sort the sequence using the second container.
- Validations: Ensure valid input and handle errors such as negative numbers or invalid arguments.
- Container Requirement: Use at least two different STL containers to implement the merge-insert sort algorithm. Handle sequences of at least 3000 integers.

Example Usage:
 ```bash
./PmergeMe 3 5 9 7 4
# Example output:
# Before: 3 5 9 7 4
# After: 3 4 5 7 9
# Time to process a range of 5 elements with std::[..] : 0.00031 us
# Time to process a range of 5 elements with std::[..] : 0.00014 us
```

## File Structure: 
- ex00/: Contains the implementation of the Bitcoin Exchange program.
- ex01/: Contains the implementation of the Reverse Polish Notation (RPN) calculator.
- ex02/: Contains the implementation of the PmergeMe sorting algorithm.
- Makefile: Each directory includes a Makefile for compiling the respective exercise.
- main.cpp: Each directory contains a main.cpp file with test cases to verify functionality.

## Compilation and Execution:

Navigate to the Exercise Directory: Open a terminal and change to the directory of the exercise you want to run.
 ```bash
cd ex00  # Replace 'ex00' with the exercise directory you want to run
```
Compile the Code: Use the provided Makefile to compile the code.
 ```bash
make
```
Run the Executable: After successful compilation, run the generated executable.
```bash
./btc input.txt  # Replace 'btc' with the correct executable for the exercise
```
Verify Output: Check the output in the terminal to verify the correctness of the program.
   
Clean Up (Optional): To clean up the compiled files, you can use the clean/fclean target in the Makefile.
 ```bash
make clean
```
or 
 ```bash
make fclean
```

## Conclusion:

By completing this module, we gain practical experience in using various STL containers and algorithms. Each exercise is designed to challenge our understanding and encourage the efficient use of containers to solve real-world problems.

## 🚀 Next Project

[FT_Transcendence](https://github.com/adhaka-afk/FT_Transcendence)

## ⏳ Previous Project

[CPP08](https://github.com/adhaka-afk/CPP08)


