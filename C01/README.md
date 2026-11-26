# 42 Piscine - C01

This repository contains the solutions for the **C01** project of the 42 Piscine. The goal of this module is to master pointers, memory addresses, arrays, and basic data manipulation in the C programming language.

## 🛠️ Exercise Overview

| Directory | Function Name | Description | Status |
| :--- | :--- | :--- | :---: |
| **ex00/** | `ft_ft` | Takes a pointer to an `int` and sets its value to `42`. | ✅ |
| **ex01/** | `ft_ultimate_ft` | Takes a pointer to a pointer (nested 9 times) to an `int` and sets its value to `42`. | ✅ |
| **ex02/** | `ft_swap` | Swaps the values of two integers using their addresses. | ✅ |
| **ex03/** | `ft_div_mod` | Divides `a` by `b` and stores result/remainder in pointers `div` and `mod`. | ✅ |
| **ex04/** | `ft_ultimate_div_mod` | Divides value pointed to by `a` by `b`, storing division in `a` and remainder in `b`. | ✅ |
| **ex05/** | `ft_putstr` | Displays a string of characters on the standard output. | ✅ |
| **ex06/** | `ft_strlen` | Counts and returns the number of characters in a string. | ✅ |
| **ex07/** | `ft_rev_int_tab` | Reverses a given array of integers in place. | ✅ |
| **ex08/** | `ft_sort_int_tab` | Sorts an array of integers in ascending order. | ✅ |

## ⚙️ Compilation & Testing

All files are written in **C** and must comply with the **42 Norm (Norminette)**. 

```bash
gcc -Wall -Wextra -Werror ft_*.c -o test_program
./test_program
