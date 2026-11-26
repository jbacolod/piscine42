# 42 Piscine - C06

This repository contains the solutions for the **C06** project of the 42 Piscine. The goal of this module is to handle command-line arguments (`argc` and `argv`) in C programs.

## 🛠️ Exercise Overview

| Directory | Function Name | Description | Status |
| :--- | :--- | :--- | :---: |
| **ex00/** | `ft_print_program_name` | Displays the program's own name followed by a newline[cite: 57]. | ✅ |
| **ex01/** | `ft_print_params` | Displays all given command-line arguments, each on a new line[cite: 58]. | ✅ |
| **ex02/** | `ft_rev_params` | Displays command-line arguments in reverse order[cite: 59]. | ✅ |
| **ex03/** | `ft_sort_params` | Displays command-line arguments sorted in ASCII order[cite: 60]. | ✅ |

## ⚙️ Compilation & Testing

All files are written in **C** and must comply with the **42 Norm (Norminette)**. 

```bash
gcc -Wall -Wextra -Werror ft_*.c -o test_program
./test_program
