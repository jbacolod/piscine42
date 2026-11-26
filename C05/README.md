# 42 Piscine - C05

This repository contains the solutions for the **C05** project of the 42 Piscine. The goal of this module is to master recursion, iterative algorithms, mathematical operations (factorial, power, square root, prime numbers), and algorithmic problem-solving.

## 🛠️ Exercise Overview

| Directory | Function Name | Description | Status |
| :--- | :--- | :--- | :---: |
| **ex00/** | `ft_iterative_factorial` | Returns the factorial of a number iteratively[cite: 40]. | ✅ |
| **ex01/** | `ft_recursive_factorial` | Returns the factorial of a number recursively[cite: 41]. | ✅ |
| **ex02/** | `ft_iterative_power` | Returns the result of raising a number to a power iteratively[cite: 42]. | ✅ |
| **ex03/** | `ft_recursive_power` | Returns the result of raising a number to a power recursively[cite: 43]. | ✅|
| **ex04/** | `ft_fibonacci` | Returns the n-th element of the Fibonacci sequence recursively[cite: 44]. | ✅ |
| **ex05/** | `ft_sqrt` | Returns the square root of a given number if it exists, or 0[cite: 45]. | ✅ |
| **ex06/** | `ft_is_prime` | Returns 1 if a number is prime, or 0 if it is not[cite: 46]. | ✅ |
| **ex07/** | `ft_find_next_prime` | Returns the next prime number greater than or equal to the given number[cite: 47]. | ✅ |
| **ex08/** | `ft_ten_queens_puzzle` | Solves the 10-queens puzzle recursively and returns the total solutions[cite: 48]. | 🚧 *Incomplete* |

## ⚙️ Compilation & Testing

All files are written in **C** and must comply with the **42 Norm (Norminette)**. 

```bash
gcc -Wall -Wextra -Werror ft_*.c -o test_program
./test_program
