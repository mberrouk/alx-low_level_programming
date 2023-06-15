# 0x0C-more_malloc_free

## Description

This project is part of the low-level programming and algorithm track at Alx School. In this project, we learn about dynamic memory allocation in C using `malloc`, `free`, `calloc`, and `realloc`. We also learn about the `exit` function and how to use it to gracefully exit our programs.

## Files

The following files are present in this repository:

| Filename | Description |
| -------- | ----------- |
| `main.h` | Header file containing function prototypes |
| `0-malloc_checked.c` | Function that allocates memory using `malloc` |
| `1-string_nconcat.c` | Function that concatenates two strings |
| `2-calloc.c` | Function that allocates memory for an array using `malloc` and initializes the memory to zero |
| `3-array_range.c` | Function that creates an array of integers |
| `100-realloc.c` | Function that reallocates a memory block using `malloc` and `free` |
| `101-mul.c` | Program that multiplies two positive numbers |

## Usage

To use any of the functions in this repository, simply include the `main.h` header file in your C file and compile the C file with the respective function(s). For example, to use the `0-malloc_checked.c` function, you would include the following line at the top of your C file:

```
#include "holberton.h"
```

And compile your C file with the `0-malloc_checked.c` file:

```
gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-malloc_checked.c -o a.out
```

## Authors

This project was completed by mberrouk for Alx School.

