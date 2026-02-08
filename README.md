*This project has been created as part of the 42 curriculum by albben-a.*

# ft_printf

## Description

**ft_printf** is a project of the 42 cursus that consists of reimplementing the standard C library function `printf()`.  
The main objective of this project is to understand how formatted output works internally, with a strong focus on variadic functions, format string parsing, and clean, modular code design.

Once completed, `ft_printf` can be added to `libft` and reused in future C projects.

---

## Instructions

### Compilation

The project includes a `Makefile` with the standard rules required by 42.  
To compile the library, run:

```bash
make
```

This will generate the static library:

```bash
libftprintf.a
```

### Available Rules

- `make` → Compiles the library.
- `make clean` → Removes object files (`.o`).
- `make fclean` → Removes object files and `libftprintf.a`.
- `make re` → Cleans and recompiles everything from scratch.

### Usage

Include the header file and link the library when compiling your program:

```c
#include "ft_printf.h"
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lftprintf
```

Example:

```c
ft_printf("Hello %s, number: %d\n", "42", 42);
```

---

## Supported Conversions

The following format specifiers are implemented:

- `%c` → Prints a single character
- `%s` → Prints a string
- `%p` → Prints a pointer address in hexadecimal format
- `%d` → Prints a signed decimal integer
- `%i` → Prints a signed integer (base 10)
- `%u` → Prints an unsigned decimal integer
- `%x` → Prints a hexadecimal number (lowercase)
- `%X` → Prints a hexadecimal number (uppercase)
- `%%` → Prints the percent character

---

## Algorithm and Data Structure Choices

The implementation of `ft_printf` is based on a **single-pass linear parsing algorithm** that processes the format string character by character.

### Format String Parsing

The main `ft_printf` function iterates through the format string using an index:

- Regular characters are written directly to the output.
- When a `'%'` character is found and followed by another character, the next character is treated as a format specifier.

This approach avoids backtracking and ensures predictable behavior.

### Variadic Argument Handling

Variadic arguments are managed using the standard C macros:
- `va_start`
- `va_arg`
- `va_end`

Once a format specifier is detected, it is passed to a dedicated dispatcher function (`detect_format`), which retrieves the corresponding argument from the `va_list` and forwards it to the appropriate output function.

### Dispatcher Design

The dispatcher function maps each conversion specifier to a specific printing function:

- `%c` → prints a character
- `%s` → prints a string
- `%p` → prints a pointer in hexadecimal format
- `%d` / `%i` → prints a signed integer
- `%u` → prints an unsigned integer
- `%x` / `%X` → prints a hexadecimal number (lowercase or uppercase)
- `%%` → prints a literal percent character

Each helper function returns the number of bytes written, which are accumulated and returned by `ft_printf`, matching the behavior of the original `printf()`.

### Error Handling and Edge Cases

- If the format string is `NULL`, the function returns `-1`.
- If the format string ends with a single `'%'`, the function returns `-1`.
- Unknown format specifiers are printed as regular characters.

---

## Resources

### Technical References

- Linux manual pages (`man printf`, `man stdarg`)
- 42 intra documentation
- Peer-to-peer learning
- GeeksforGeeks (used to clarify theoretical concepts such as variadic functions)

### Use of Artificial Intelligence

Artificial Intelligence was used exclusively to:
- Design more complex test cases
- Validate edge cases and output correctness
- Improve testing coverage during development

AI was **not** used to generate the implementation itself, ensuring full understanding of the code and compliance with the learning objectives of the 42 curriculum.
