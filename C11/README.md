# 42 Piscine - C11

This repository contains the solutions for the **C11** project of the 42 Piscine. The goal of this module is to master advanced programming concepts in C, including function pointers, higher-order functions, and generic algorithms.

## 🛠️ Exercise Overview

| Directory | Function Name | Description | Status |
| :--- | :--- | :--- | :---: |
| **ex00/** | `ft_foreach` | Applies a given function to all elements of an integer array in order[cite: 125]. | ✅ |
| **ex01/** | `ft_map` | Applies a function to an integer array and returns a new allocated array of return values[cite: 126]. | ✅ |
| **ex02/** | `ft_any` | Returns 1 if at least one element returns non-zero when passed to function `f`[cite: 127]. | ✅ |
| **ex03/** | `ft_count_if` | Returns the number of elements for which function `f` does not return 0[cite: 128]. | ✅ |
| **ex04/** | `ft_is_sort` | Returns 1 if an integer array is sorted according to a comparison function, 0 otherwise[cite: 129]. | ✅ |
| **ex05/** | `do-op` | Program that performs basic arithmetic operations using an array of function pointers[cite: 130]. | ✅ |
| **ex06/** | `ft_sort_string_tab` | Sorts an array of strings in ASCII order by exchanging pointers[cite: 132]. | ✅ |
| **ex07/** | `ft_advanced_sort_string_tab` | Sorts an array of strings using a custom comparison function pointer[cite: 133]. | ✅ |

## ⚙️ Compilation & Testing

All files are written in **C** and must comply with the **42 Norm (Norminette)**. 

```bash
gcc -Wall -Wextra -Werror ft_*.c -o test_program
./test_program
