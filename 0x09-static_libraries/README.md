# 0x09-static_libraries

This is a project for the ALX Software Engineering program. In this project, we learn about static libraries in C programming.

## Files

The following files are included in this project:

* `libmy.a`: A static library containing various functions we've written throughout the ALX program.
* `main.h`: A header file containing prototypes for the functions in `libmy.a`.
* `create_static_lib.sh`: A shell script that creates a static library called `liball.a` from all the `.c` files in the current directory.

## Usage

To use the functions in `libmy.a`, you must first compile your program with the library. Here's an example:

```
gcc -Wall -pedantic -Werror -Wextra main.c -L. -libmy -o my_program
```

This command will compile `main.c` with the `libmy.a` library and create an executable called `my_program`.

To create your own static library using the `create_static_lib.sh` script, simply run the script and it will create a library called `liball.a` in the current directory:

```
./create_static_lib.sh
```

## Credits

This project was completed by mberrouk as part of the ALX Software Engineering program.
