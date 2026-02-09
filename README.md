# Libft

*This project has been created as part of the 42 curriculum by agaspary.*

## Table of Contents

- [Description](#description)
- [Instructions](#instructions)
- [Usage](#usage)
- [Function Reference](#function-reference)
  - [Character Function](#character-functions)
  - [String Functions](#string-functions)
  - [Memory Functions](#memory-functions)
  - [Conversion Functions](#conversion-functions)
  - [String Creation, Manipulation, Iteration](#string-creation-manipulation-iteration)
  - [File Output Functions](#file-output-functions)
  - [Linked List Functions](#linked-list-functions)
- [Resources](#resources)
- [Author](#author)

## Description

**Libft** is a custom C library developed as a foundational project in the 42 curriculum. The goal of this project is to recreate a selection of standard C library functions from scratch in order to deeply understand how they work internally.

This library is intended to be reused in future projects and provides:
* ✅ Standard C library function reimplementations
* ✅ Linked list manipulation functions
* ✅ Compiled with strict flags: -Wall -Wextra -Werror
* ✅ Additional utility functions for string and memory manipulation


---

## Instructions

### Compilation

The library is compiled using `cc` with the flags:

```
-Wall -Wextra -Werror
```

A Makefile is provided and includes the required rules.

#### Available Makefile commands

```bash
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Full recompilation
```

After compilation, a static library named `libft.a` will be created.

---

## Usage

### Including the library

In your C source files:

```c
#include "libft.h"
```

### Compiling your program with libft

```bash
cc -Wall -Wextra -Werror main.c -L. -lft
```

### Example

```c
#include "libft.h"
#include <stdlib.h>

int main(void)
{
    char *s;

    s = ft_strdup("Hello Libft");
    if (!s)
        return (1);
    ft_putendl_fd(s, 1);
    free(s);
    return (0);
}
```

---

## Function Reference
Functions are grouped by purpose to improve readability.

---

### Part 1: Libc Functions

#### Character Functions

| Function     | Description                                      |
| ------------ | ------------------------------------------------ |
| `ft_isalpha` | Checks if a character is alphabetic              |
| `ft_isdigit` | Checks if a character is a digit                 |
| `ft_isalnum` | Checks if a character is alphanumeric            |
| `ft_isascii` | Checks if a character is part of the ASCII table |
| `ft_isprint` | Checks if a character is printable               |
| `ft_toupper` | Converts a character to uppercase                |
| `ft_tolower` | Converts a character to lowercase                |

#### String Functions

| Function     | Description                                             |
| ------------ | ------------------------------------------------------- |
| `ft_strlen`  | Returns the length of a string                          |
| `ft_strchr`  | Locates the first occurrence of a character in a string |
| `ft_strrchr` | Locates the last occurrence of a character in a string  |
| `ft_strncmp` | Compares two strings up to `n` characters               |
| `ft_strnstr` | Locates a substring within a string                     |
| `ft_strlcpy` | Copies a string with size limitation                    |
| `ft_strlcat` | Concatenates strings with size limitation               |
| `ft_strdup`  | Allocates and returns a duplicate of a string           |

#### Memory Functions

| Function     | Description                                 |
| ------------ | ------------------------------------------- |
| `ft_memset`  | Fills memory with a constant byte           |
| `ft_bzero`   | Sets memory to zero                         |
| `ft_memcpy`  | Copies a block of memory                    |
| `ft_memmove` | Copies memory safely, handling overlap      |
| `ft_memchr`  | Searches for a byte in memory               |
| `ft_memcmp`  | Compares two memory areas                   |
| `ft_calloc`  | Allocates memory and initializes it to zero |

#### Conversion Functions

| Function  | Description                     |
| --------- | ------------------------------- |
| `ft_atoi` | Converts a string to an integer |
| `ft_itoa` | Converts an integer to a string |
---

### Part 2: Additional Functions

#### String Creation Manipulation Iteration

| Function     | Description                                             |
| ------------ | ------------------------------------------------------- |
| `ft_substr`  | Extracts a substring from a string                      |
| `ft_strjoin` | Concatenates two strings into a new one                 |
| `ft_strtrim` | Trims characters from the beginning and end of a string |
| `ft_split`   | Splits a string using a delimiter                       |
| `ft_strmapi`  | Applies a function to each character and returns a new string |
| `ft_striteri` | Applies a function to each character in-place                 |
 
#### File Output Functions

| Function        | Description                             |
| --------------- | --------------------------------------- |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd`  | Writes a string to a file descriptor    |
| `ft_putendl_fd` | Writes a string followed by a newline   |
| `ft_putnbr_fd`  | Writes an integer to a file descriptor  |

---

### Part 3: Linked List Functions

#### List Structure

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

#### List Operations

| Function          | Description                                            |
| ----------------- | ------------------------------------------------------ |
| `ft_lstnew`       | Creates a new list node                                |
| `ft_lstadd_front` | Adds a node at the beginning of the list               |
| `ft_lstsize`      | Returns the number of nodes in the list                |
| `ft_lstlast`      | Returns the last node of the list                      |
| `ft_lstadd_back`  | Adds a node at the end of the list                     |
| `ft_lstdelone`    | Deletes a single node                                  |
| `ft_lstclear`     | Deletes and frees all nodes of a list                  |
| `ft_lstiter`      | Applies a function to each node’s content              |
| `ft_lstmap`       | Creates a new list by applying a function to each node |

---

## Resources

* C Standard Library man pages (`man <function>`)
* Sources for functions code case verification
* 42 Libft subject PDF

### AI Usage

AI tools were used as a learning aid to:

* Read and understand new technical information
* Clarify C-related terminology and concepts
* Help organize and format the README.md content clearly and consistently

All implementation decisions and code were written and understood by the author, in accordance with the 42 curriculum guidelines.

---

## Author

**agaspary**

42 Yerevan

---

## License

This project is part of the 42 School curriculum and is intended for educational purposes only.


