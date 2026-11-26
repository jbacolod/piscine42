# 42 Piscine - C08

This repository contains the solutions for the **C08** project of the 42 Piscine. The goal of this module is to work with header files (`.h`), macros, structures, and stock string transformations.

## 🛠️ Exercise Overview

| Directory | File / Function Name | Description | Status |
| :--- | :--- | :--- | :---: |
| **ex00/** | `ft.h` | Header file containing prototypes for basic functions (`ft_putchar`, `ft_swap`, `ft_putstr`, `ft_strlen`, `ft_strcmp`)[cite: 84]. | ✅ |
| **ex01/** | `ft_boolean.h` | Header file defining boolean types and macros for even/odd argument checking[cite: 85]. | ✅ |
| **ex02/** | `ft_abs.h` | Macro `ABS` header file that replaces its argument with its absolute value[cite: 87]. | ✅ |
| **ex03/** | `ft_point.h` | Header file defining the `t_point` structure[cite: 88]. | ✅ |
| **ex04/** | `ft_strs_to_tab` | Transforms an array of strings into an array of structures (`t_stock_str`)[cite: 89]. | ✅ |
| **ex05/** | `ft_show_tab` | Displays the content of the structure array created by `ft_strs_to_tab`[cite: 91]. | ✅ |

## ⚙️ Compilation & Testing

All files are written in **C** and must comply with the **42 Norm (Norminette)**. 

```bash
gcc -Wall -Wextra -Werror ft_*.c -o test_program
./test_program
