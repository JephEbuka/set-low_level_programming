# 0x0A – malloc and free

This project introduces dynamic memory allocation in C using `malloc` and `free`. It focuses on creating and managing dynamically allocated arrays and 2D grids of characters and integers. [page:1]

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`, `nano`
- All files will be compiled on Ubuntu 22.04 LTS using:
  - `gcc -Wall -pedantic -Werror -Wextra -std=gnu89`
- Code must follow Betty style
- No global variables
- You must use only the C standard library functions allowed by the project
- All function prototypes are declared in `main.h`
- All memory allocated with `malloc` must be freed with `free` [page:1]

## Files

- `0-create_array.c` – Creates an array of chars and initializes it with a specific char. Returns `NULL` if `size` is `0` or if allocation fails. [page:1]
- `1-strdup.c` – Returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter (custom implementation of `_strdup`). [page:1]
- `2-str_concat.c` – Concatenates two strings into a newly allocated buffer containing `s1` followed by `s2`, null-terminated; treats `NULL` as an empty string. [page:1]
- `3-alloc_grid.c` – Returns a pointer to a 2D array (grid) of integers, initialized to `0`. Returns `NULL` on failure or if `width` or `height` is `0` or negative. [page:1]
- `4-free_grid.c` – Frees a 2D grid previously created by `alloc_grid` by freeing each row and then the grid itself. [page:1]
- `main.h` – Header file containing all function prototypes for this project. [page:1]

## Example usage

### 0-create_array

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a
./a
```

Expected output (hex dump of `'H'` initialized buffer) [page:1].

### 1-strdup

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strdup.c -o s
./s
```

Output:

```text
DIY SE
``` 

[page:1]

### 2-str_concat

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-str_concat.c -o c
./c | cat -e
```

Output:

```text
Betty School$
``` 

[page:1]

### 3-alloc_grid

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-alloc_grid.c -o g
./g
```

Output (grid of zeros with updated values) [page:1].

### 4-free_grid (with valgrind)

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-alloc_grid.c 4-free_grid.c -o f
valgrind ./f
```

`valgrind` reports:

- All heap blocks freed
- 0 bytes in use at exit
- 0 errors [page:1]

## Repository structure

- GitHub repository: `set-low_level_programming`
- Directory for this project: `malloc_free` [page:1][page:2]

