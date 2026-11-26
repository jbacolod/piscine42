# 42 Piscine - C03

This repository contains the solutions for the **C03** project of the 42 Piscine. The goal of this module is to manipulate strings by reproducing standard C library functions related to string comparison, concatenation, searching, and sizing.

## 🛠️ Exercise Overview

| Directory | Function Name | Description | Status |
| :--- | :--- | :--- | :---: |
| **ex00/** | `ft_strcmp` | Reproduces the behavior of the `strcmp` function[cite: 9]. | ✅ |
| **ex01/** | `ft_strncmp` | Reproduces the behavior of the `strncmp` function[cite: 10]. | ✅ |
| **ex02/** | `ft_strcat` | Reproduces the behavior of the `strcat` function[cite: 11]. | ✅ |
| **ex03/** | `ft_strncat` | Reproduces the behavior of the `strncat` function[cite: 12]. | ✅ |
| **ex04/** | `ft_strstr` | Reproduces the behavior of the `strstr` function[cite: 13]. | ✅ |
| **ex05/** | `ft_strlcat` | Reproduces the behavior of the `strlcat` function[cite: 14]. | ✅ |


## ⚙️ Compilation & Testing

All files are written in **C** and must comply with the **42 Norm (Norminette)**. 

```bash
gcc -Wall -Wextra -Werror ft_*.c -o test_program
./test_program
