# 42 Piscine - C04

This repository contains the solutions for the **C04** project of the 42 Piscine. The goal of this module is to implement basic number and string conversion functions, as well as working with custom number bases.

## 🛠️ Exercise Overview

| Directory | Function Name | Description | Status |
| :--- | :--- | :--- | :---: |
| **ex00/** | `ft_strlen` | Counts and returns the number of characters in a string[cite: 24]. | ✅ |
| **ex01/** | `ft_putstr` | Prints a string of characters to the standard output[cite: 25]. | ✅ |
| **ex02/** | `ft_putnbr` | Displays an integer passed as a parameter, handling all `int` values[cite: 26]. | ✅ |
| **ex03/** | `ft_atoi` | Converts the initial portion of a string into its integer representation[cite: 27]. | ✅ |
| **ex04/** | `ft_putnbr_base` | Displays a number in a given base system in the terminal[cite: 28]. | ✅ |
| **ex05/** | `ft_atoi_base` | Converts a string in a specific base into an integer representation[cite: 30]. | ✅ |

## ⚙️ Compilation & Testing

All files are written in **C** and must comply with the **42 Norm (Norminette)**. 

```bash
gcc -Wall -Wextra -Werror ft_*.c -o test_program
./test_program
