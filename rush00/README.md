# Rush00 - C Piscine (42 School)

This project is part of the **42 Piscine**. The goal is to write a C program that prints a rectangle of custom dimensions ($x \times y$) on the screen using specific characters for the corners, edges, and inside area.

---

## 📁 File Structure

The subject requires exactly three files:

* **`main.c`**: Contains the `main` function used to test `rush` (this file will be modified/replaced during evaluation).
* **`ft_putchar.c`**: Contains only the `ft_putchar` function to output individual characters using system calls (`write`).
* **`rush00.c`**: Contains the core `rush(int x, int y)` function handling the rectangle drawing logic.

---

## ⚙️ Compilation & Execution

To compile the files together using `gcc` with the standard 42 flags (`-Wall -Wextra -Werror`), run:

```bash
gcc -Wall -Wextra -Werror main.c ft_putchar.c rush00.c -o rush

```

Execute the binary:

```bash
./rush

```

---

## 📐 The `rush` Function Specifications

The function prototype is:

```c
void rush(int x, int y);

```

* **`x`**: Represents the rectangle width (number of characters per row).
* **`y`**: Represents the rectangle height (number of rows).

### Edge Cases & Defensive Programming

As per the subject requirements, the function must never crash or enter an infinite loop:

* If $x \le 0$ or $y \le 0$, the function gracefully handles the input (e.g., returning immediately without printing anything).

---

## 👥 Authors

* [Your Name / Login]
* [Teammate Name / Login]
