# 42 Piscine - C00

This repository contains the solutions for the **C00** project of the 42 Piscine. The goal of this module is to introduce core concepts of the C programming language, including functions, basic data types, loops, conditional statements, and standard output manipulation (`write` / `ft_putchar`).

## 🛠️ Exercise Overview

| Directory | Function Name | Description | Status |
| :--- | :--- | :--- | :---: |
| **ex00/** | `ft_putchar` | Displays the character passed as a parameter. | ✅ |
| **ex01/** | `ft_print_alphabet` | Displays the lowercase alphabet in ascending order (`a` to `z`). | ✅ |
| **ex02/** | `ft_print_reverse_alphabet` | Displays the lowercase alphabet in descending order (`z` to `a`). | ✅ |
| **ex03/** | `ft_print_numbers` | Displays all single-digit numbers in ascending order (`0` to `9`). | ✅ |
| **ex04/** | `ft_is_negative` | Displays `'N'` if the integer parameter is negative, or `'P'` if positive or zero. | ✅ |
| **ex05/** | `ft_print_comb` | Displays all unique combinations of three distinct digits in ascending order. | ✅ |
| **ex06/** | `ft_print_comb2` | Displays all combinations of two distinct two-digit numbers (`00` to `99`) in ascending order. | ✅ |
| **ex07/** | `ft_putnbr` | Displays an integer passed as a parameter (supports all `int` range values). | ✅ |
| **ex08/** | `ft_print_combn` | Displays all unique combinations of n distinct digits in ascending order ($0 < n < 10$). | ✅ |

## ⚙️ Compilation & Testing

All files are written in **C** and must comply with the **42 Norm (Norminette)**. 

```bash
gcc -Wall -Wextra -Werror ft_*.c -o test_program
./test_program
