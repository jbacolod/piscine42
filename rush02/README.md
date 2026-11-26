# 42 C Piscine — Rush02

Group project developed during the **42 C Piscine** weekend challenge. The goal of **Rush02** is to parse a dictionary file containing number-to-word mappings and convert numeric inputs into their corresponding written English representation.

> **Project Status:** Partially Implemented / In Progress

## 📌 Project Overview

The program takes either one or two command-line arguments:
* **1 argument:** `<number>` — uses the default reference dictionary (`numbers.dict`).
* **2 arguments:** `<reference_dictionary>` `<number>` — uses a custom dictionary file provided by the user.

### Expected Behavior & Examples

* **Standard conversion:**
  ```bash
  ./rush-02 42
  # Output: forty two
  ```
* **Custom dictionary:**
  ```bash
  ./rush-02 custom.dict 100
  # Output: one hundred
  ```
* **Error handling:**
  * Invalid number input (negative numbers, non-numeric characters, empty strings, etc.) should print `"Error\n"` to standard output/error.
  * Dictionary parsing errors or missing dictionary entries should print `"Dict Error\n"`.

## 🧱 Typical Architecture & Modules

Depending on how your team split the tasks, a clean structure for `rush-02` generally includes:

* **Input Validation & Parsing:** Checking argument count (`argc`), validating numeric strings, and stripping leading spaces/signs when allowed by the subject.
* **Dictionary Loader (`open`, `read`, `close`):** Reading the dictionary file line by line, parsing `<key>: <value>` pairs, handling whitespace and blank lines, and storing entries in a structured format (such as an array of structs).
* **Number Decomposition & Conversion Engine:** Splitting large numbers into groups (thousands, millions, billions, and higher scale names present in the dictionary) and assembling words for hundreds, tens, and units.
* **Memory Management:** Dynamically allocating strings/structures with `malloc` and freeing all allocated memory cleanly (`free`) on both success and error paths.

## ⚙️ Compilation & Usage

To build the project using the `Makefile`:

```bash
make
```

To run the executable:

```bash
./rush-02 [dictionary_path] <number>
```

Standard 42 compilation flags:

```bash
cc -Wall -Wextra -Werror <source_files.c> -o rush-02
```

> **Note:** Make sure to follow the exact rules, file names, and function prototypes specified in the official **Rush02 subject** before submitting or evaluating.

## 🚧 Implementation Status & Challenges

Because Rush projects happen over a single intensive weekend, several challenges commonly arise and shaped what was completed here:

* **Completed / Explored:** Basic argument handling, initial dictionary reading/parsing logic, and core number-to-word formatting concepts.
* **Incomplete / Edge Cases:** Full support for arbitrarily large numbers (beyond standard integer limits), strict dictionary edge cases (duplicate keys, malformed lines, extra spaces, missing scale definitions), and complete memory cleanup across all error branches.

## 📜 Norminette & Coding Rules

Code written for this project follows 42's coding standard (**The Norm**):

* Maximum **25 lines** per function.
* Maximum **5 functions** per file.
* Strict formatting, indentation, and variable declaration rules.
* Allowed functions typically restricted to `malloc`, `free`, `write`, `open`, `read`, and `close`.

*Note: This README documents a Piscine group project for learning and portfolio reference.*