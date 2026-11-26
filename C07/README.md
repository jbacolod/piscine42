# 42 Piscine - C07

This repository contains the solutions for the **C07** project of the 42 Piscine. The goal of this module is to manage dynamic memory allocation (`malloc` and `free`) for strings and arrays.

## 🛠️ Exercise Overview

| Directory | Function Name | Description | Status |
| :--- | :--- | :--- | :---: |
| **ex00/** | `ft_strdup` | Reproduces the behavior of the `strdup` function using dynamic allocation[cite: 70]. | ✅ |
| **ex01/** | `ft_range` | Allocates and returns an array containing all values between `min` and `max`[cite: 71]. | ✅ |
| **ex02/** | `ft_ultimate_range` | Allocates an array of integers between `min` and `max` via a pointer reference[cite: 72]. | ✅ |
| **ex03/** | `ft_strjoin` | Concatenates all strings from an array, separated by a given separator string[cite: 73]. | ✅ |
| **ex04/** | `ft_convert_base` | Converts a number string from one base to another using dynamic allocation[cite: 74]. | ✅ |
| **ex05/** | `ft_split` | Splits a string of characters using a string of charsets as separators[cite: 75]. | ✅ |

## ⚙️ Compilation & Testing

All files are written in **C** and must comply with the **42 Norm (Norminette)**. 

```bash
gcc -Wall -Wextra -Werror ft_*.c -o test_program
./test_program
