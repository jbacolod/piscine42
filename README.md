# 42 C Piscine — Projects & Exercises

Welcome to my repository showcasing the projects and exercises I completed during the **42 C Piscine**.

The Piscine is an intensive 4-week coding bootcamp focused on peer-to-peer learning, imperative programming in C, shell scripting, and strict adherence to memory management, logic, and coding standards (**Norminette**).

---

## 🛠️ Summary of Completed Modules

### C Modules (C00 – C09, C11)

Core C programming curriculum covering fundamentals to intermediate data structures, memory management, and functional programming concepts:

- **C00 – C04:** Basic syntax, loops, recursion, strings, pointers, array manipulations, and string conversion functions (`ft_atoi`, `ft_putnbr`, etc.).
- **C05 – C06:** Mathematical algorithms (iterative & recursive functions, factorials, powers, square roots, prime numbers) and command-line argument parsing (`argc`, `argv`).
- **C07 – C08:** Dynamic memory allocation (`malloc`, `free`), string duplication, ranges, memory leak prevention, and header files (`.h` structures & macros).
- **C09:** Basics of static libraries (`libft.a`), `Makefile` creation, and project build automation.
- **C10:** *Skipped* — Focused efforts on mastering memory allocation, libraries, and moving directly to function pointers.
- **C11:** **Completed** — Function pointers, callbacks, array mapping/filtering (`ft_foreach`, `ft_map`, `ft_any`, `ft_count_if`), and custom sorting algorithms (`ft_sort_string_tab`, `ft_advanced_sort_string_tab`).

### Shell Module (Shell00)

- **Shell00:** Command-line fundamentals, file permissions, soft/hard links, file searching (`find`), and environment configuration.

---

## 👥 Group Projects (Rushes)

- **Rush00** `[Completed]`
  - Collaborated in a team of 3 to create a program that prints structured ASCII art grids based on input parameters ($x, y$). Focused on logic separation, team communication, and strict adherence to the Norm.
- **Rush01** `[Skipped]`
  - Did not participate in this weekend challenge to focus on catching up with the core C modules.
- **Rush02** `[Partial / In Progress]`
  - **Objective:** Parse dictionary files and convert large numerical inputs into their written word representation in English (e.g., `42` $\rightarrow$ `"forty two"`).
  - **Status:** Partially implemented. Due to time constraints during the weekend challenge and complex edge cases (dictionary parsing, handling arbitrarily large numbers, memory cleanup), the project was not fully finalized. However, it served as an incredible deep dive into complex data structures, edge-case handling, and team debugging under strict deadlines.

---

## 💻 How to Use & Test the Code

If you want to explore, copy, or test the solutions in this repository, please keep the following guidelines in mind:

1. **Follow the Subject Requirements (Consegna):**
   - Most exercises require you to submit **only specific functions** (e.g., `ft_strlen.c`) without a `main()` function.
   - Before compiling or submitting to Moulinette, make sure to **remove or comment out any `main()` functions** used for local testing.
   - Check the exact file names, prototypes, and required folder structures (`ex00/`, `ex01/`, etc.) specified in each module's subject PDF.
2. **Compilation:**
   - Standard compilation flags used at 42 are strict. Always compile with:
     ```bash
     gcc -Wall -Wextra -Werror <your_files.c>
     ```
   - For modules involving headers or libraries (like **C08**, **C09**, or **Rush** projects), ensure all required `.h` files are properly included and use the provided `Makefile` where available.
3. **Peer-Learning Philosophy:**
   - In the spirit of 42, use these snippets as a reference to understand the logic and edge cases rather than blindly copying. Being able to explain every line of code during peer-evaluations is the key to passing!

---

## 📜 Norminette Compliance

All completed functions adhere to 42's strict coding guidelines (**The Norm**):

- Maximum **25 lines** per function.
- Maximum **5 functions** per file.
- Strict variable initialization and formatting requirements (max 5 variables per function, no `for` loops, no ternary operators, etc.).
- No forbidden standard C functions (relying primarily on `write`, `malloc`, `free`, and custom implementations).

---

*Note: This repository is published for personal documentation, educational reference, and portfolio presentation.*