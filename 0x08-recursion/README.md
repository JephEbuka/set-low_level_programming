# 0x08. C - Recursion

This project contains C functions that practice using **recursion** instead of loops to solve problems. It is part of the SE 200: C Programming I curriculum.

## Learning objectives

- Understand what recursion is and how it works
- Implement functions that call themselves
- Identify base cases and recursive cases
- Know when recursion is appropriate (and when it is not)

## Files

- `0-puts_recursion.c` – prints a string followed by a new line using recursion
- `1-print_rev_recursion.c` – prints a string in reverse using recursion
- `2-strlen_recursion.c` – returns the length of a string
- `3-factorial.c` – returns the factorial of a given number
- `4-pow_recursion.c` – returns the value of `x` raised to the power of `y`
- `5-sqrt_recursion.c` – returns the natural square root of a number
- `6-is_prime_number.c` – returns `1` if the input integer is a prime number, otherwise `0`
- `main.h` – header file with all function prototypes

## Compilation

All files are compiled with:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main_file.c> <task_file.c> -o <output_name>
```

Example:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-puts_recursion.c _putchar.c -o 0-puts_recursion
```

## Requirements

- Ubuntu 20.04 LTS
- `gcc` with the options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- No use of loops for these tasks, only recursion

