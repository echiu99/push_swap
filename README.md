# Push_swap

Push_swap is a sorting algorithm visualizer I developed in C. This program takes a stack of integers and generates the smallest possible sequence of operations to sort the stack in ascending order. By working within specific constraints and utilizing only a defined set of operations, I explored the complexities of algorithm optimization and data structure manipulation.

## Features
- Generates the smallest possible sequence of instructions to sort a stack.
- Adheres to strict constraints using a predefined set of operations.
- Provides error handling for invalid inputs and edge cases.
- Optimized for minimal instruction counts with benchmarks for up to 500 numbers.

## Installation
1. Clone this repository:
```
git clone https://github.com/your-username/push_swap.git  
cd push_swap  
```
2. Compile the program using the Makefile:
```
make
```

## Usage
Run the program by providing a list of integers as arguments. The program outputs the sequence of operations required to sort the integers in ascending order.

## Example:
```
./push_swap 4 3 2 1  
```
Output:
```
pb  
pb  
sa  
pa  
pa  
```

## Supported Operations:
The program uses the following operations to manipulate two stacks (a and b):
- sa: Swap the first two elements of stack a.
- sb: Swap the first two elements of stack b.
- ss: Perform sa and sb simultaneously.
- pa: Push the top element of stack b onto stack a.
- pb: Push the top element of stack a onto stack b.
- ra: Rotate stack a (shift all elements up).
- rb: Rotate stack b (shift all elements up).
- rr: Perform ra and rb simultaneously.
- rra: Reverse rotate stack a (shift all elements down).
- rrb: Reverse rotate stack b (shift all elements down).
- rrr: Perform rra and rrb simultaneously.

## Benchmarks
To evaluate performance, I tested the program with random inputs:
- 100 numbers: Sorted in fewer than 700 operations.
- 500 numbers: Sorted in fewer than 5500 operations.
These benchmarks demonstrate the efficiency of the implemented algorithms.

## Error Handling
The program gracefully handles invalid input by printing Error to standard error. Examples of invalid inputs include:
- Non-integer values.
- Duplicates in the input list.
- Values exceeding the range of a 32-bit integer.

## Technical Details
- Programming Language: C.
- Libraries:
  - Custom libft for utility functions.
  - Standard library functions like malloc, free, and write,
- Makefile Rules:
  - make: Compile the program.
  - make clean: Remove object files.
  - make fclean: Remove object files and the executable.
  - make re: Recompile everything.

## Challenges
The Push_swap project taught me about algorithmic efficiency, especially in scenarios with strict constraints. Finding the optimal sorting sequence involved:
- Implementing and fine-tuning sorting algorithms like insertion sort and quick sort.
- Managing memory efficiently to avoid leaks or crashes.
- Balancing complexity and execution speed for large data sets.

## About This Project
I built Push_swap as part of my programming journey to deepen my understanding of algorithms and data structures. Every part of this project, from parsing inputs to designing efficient sorting logic, reflects my commitment to writing clean and optimized code.

## Acknowledgments:
This project is part of the 42 curriculum and is designed to teach the fundamentals of threading, synchronization, and process management. Special thanks to the 42 network for the learning opportunity.
