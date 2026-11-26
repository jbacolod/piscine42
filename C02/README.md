# 42 Piscine - C02

This repository contains the solutions for the **C02** project of the 42 Piscine. The goal of this module is to manipulate strings, string arrays, and memory areas in the C programming language.

## 🛠️ Exercise Overview

| Directory | Function Name | Description | Status |
| :--- | :--- | :--- | :---: |
| **ex00/** | `ft_strcpy` | Reproduces the behavior of the `strcpy` function[cite: 1]. | ✅ |
| **ex01/** | `ft_strncpy` | Reproduces the behavior of the `strncpy` function[cite: 1]. | ✅ |
| **ex02/** | `ft_str_is_alpha` | Returns `1` if the string contains only alphabetical characters (and `0` otherwise, or if empty)[cite: 1]. | ✅ |
| **ex03/** | `ft_str_is_numeric` | Returns `1` if the string contains only digits (and `0` otherwise, or if empty)[cite: 1]. | ✅ |
| **ex04/** | `ft_str_is_lowercase` | Returns `1` if the string contains only lowercase characters (and `0` otherwise, or if empty)[cite: 1]. | ✅ |
| **ex05/** | `ft_str_is_uppercase` | Returns `1` if the string contains only uppercase characters (and `0` otherwise, or if empty)[cite: 1]. | ✅ |
| **ex06/** | `ft_str_is_printable` | Returns `1` if the string contains only printable characters (and `0` otherwise, or if empty)[cite: 1]. | ✅ |
| **ex07/** | `ft_strupcase` | Converts every letter to uppercase and returns the string[cite: 1]. | ✅ |
| **ex08/** | `ft_strlowcase` | Converts every letter to lowercase and returns the string[cite: 1]. | ✅ |
| **ex09/** | `ft_strcapitalize` | Capitalizes the first letter of each word and converts all other letters to lowercase[cite: 1]. | ✅ |
| **ex10/** | `ft_strlcpy` | Reproduces the behavior of the `strlcpy` function[cite: 1]. | ✅ |
| **ex11/** | `ft_putstr_non_printable` | Displays a string, printing non-printable characters as lowercase hexadecimal values preceded by a backslash[cite: 1]. | ✅ |
| **ex12/** | `ft_print_memory` | Displays a memory area with addresses, hexadecimal content, and printable characters[cite: 1]. | ✅ |

## ⚙️ Compilation & Testing

All files are written in **C** and must comply with the **42 Norm (Norminette)**. 

```bash
gcc -Wall -Wextra -Werror ft_*.c -o test_program
./test_program
