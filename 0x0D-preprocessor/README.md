# 0x0D-preprocessor

This repository contains C programs that demonstrate the usage of the C preprocessor. The preprocessor is a powerful tool that performs various tasks before the compilation of the code.

## Files

- `0-object_like_macro.h`: Defines a macro named `SIZE` as an abbreviation for the token `1024`.
- `1-pi.h`: Defines a macro named `PI` as an abbreviation for the token `3.14159265359`.
- `2-main.c`: Prints the name of the file it was compiled from.
- `3-function_like_macro.h`: Defines a function-like macro `ABS(x)` that computes the absolute value of a number `x`.
- `4-sum.h`: Defines a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.

## Getting Started

To get started with this project, follow these steps:

1. Clone the repository: `https://github.com/mberrouk/alx-low_level_programming`
2. Navigate to the project directory: `cd 0x0D-preprocessor`
3. Compile the C programs using your preferred C compiler.
4. Run the compiled programs to see the output.

## Usage

Each C file in this repository can be compiled and executed individually. For example, to compile and run `2-main.c`, use the following commands:

```
gcc -Wall -Werror -Wextra -pedantic 2-main.c -o main
./main
```

Make sure to replace `2-main.c` with the desired file name.

