# 0x12. C - Singly linked lists

This project is about implementing and using singly linked lists in C.  
It covers how to define a `list_t` structure, traverse a list, add nodes at the beginning and end, and properly free all allocated memory [web:64].

## Data structure

```c
/**
 * struct list_s - singly linked list
 * @str: string
 * @len: length of the string
 * @next: points to the next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
```

This structure is defined in `lists.h` and is used in all tasks.

## Files

- `lists.h`  
  Header file containing the definition of `list_t` and function prototypes.

- `0-print_list.c`  
  Function `print_list` prints all the elements of a `list_t` list and returns the number of nodes.

- `1-list_len.c`  
  Function `list_len` returns the number of elements in a `list_t` list.

- `2-add_node.c`  
  Function `add_node` adds a new node at the beginning of a `list_t` list.

- `3-add_node_end.c`  
  Function `add_node_end` adds a new node at the end of a `list_t` list.

- `4-free_list.c`  
  Function `free_list` frees a `list_t` list.

- `100-first.c`  
  Function marked with a constructor attribute that prints a message before `main` is executed.

- `101-hello_alx.asm`  
  64-bit NASM program that prints `Hello, ALX` followed by a new line using `printf`.

- `0-main.c`, `1-main.c`, `2-main.c`, `3-main.c`, `4-main.c`, `100-main.c`  
  Test files provided by the project to check each task [page:3].

## Compilation

All C files are compiled using:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main_file.c> <task_file.c> [other_files.c] -o <output>
```

Examples:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o d
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-first.c -o first
```

## Assembly

The assembly file is compiled with:

```bash
nasm -f elf64 101-hello_alx.asm
gcc -no-pie -std=gnu89 101-hello_alx.o -o hello
./hello
```

This prints:

```text
Hello, ALX
```

## Betty style

All C files in this directory are checked with:

```bash
betty-doc *.c
betty-style *.c
```

The code follows the Betty style guide (tabs for indentation, proper comments, and line length under 80 characters) [web:48].

## Author

- Your Name `<your.email@example.com>`
