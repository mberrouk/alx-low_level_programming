# 0x0B-malloc_free

This is a project for the ALX Software Engineering program. In this project, we learn about dynamic memory allocation in C programming using `malloc` and `free`.

## Files

The following files are included in this project:

* `0-create_array.c`: A function that creates an array of characters and initializes it with a specific character.
* `1-strdup.c`: A function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
* `2-str_concat.c`: A function that concatenates two strings.
* `3-alloc_grid.c`: A function that returns a pointer to a 2 dimensional array of integers.
* `4-free_grid.c`: A function that frees a 2 dimensional grid previously created by the `alloc_grid` function.
* `100-argstostr.c`: A function that concatenates all the arguments of a program.
* `101-strtow.c`: A function that splits a string into words.

## Usage

To use any of the functions in this project, simply include the corresponding header file in your C program and call the function. For example, to use the `strdup` function:

```c
#include "main.h"

int main(void)
{
    char *str = "Hello, world!";
    char *new_str = _strdup(str);

    printf("%s\n", new_str);

    free(new_str);

    return (0);
}
```

This program will output "Hello, world!" to the console, since `new_str` is a copy of the original string.

## Credits

This project was completed by mberrouk as part of the ALX Software Engineering program.
