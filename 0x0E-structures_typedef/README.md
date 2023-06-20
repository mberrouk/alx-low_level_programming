# 0x0E-structures_typedef

This repository contains C programs that demonstrate the usage of structures and typedef in the C programming language.

## Files

- `dog.h`: Header file that defines the structure `dog` and declares related functions.
- `dog.c`: Source file that implements the functions declared in `dog.h`.
- `main.c`: Main source file that demonstrates the usage of the `dog` structure and functions.

## Usage

To compile the program, use the following command:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o dog
```

To run the program, execute the following command:

```
./dog
```

## Examples

The program demonstrates the creation and manipulation of `dog` objects. It allows the user to input the name, age, and breed of a dog and then displays the information.

```c
Enter the name of the dog: Max
Enter the age of the dog: 3
Enter the breed of the dog: Labrador Retriever

Dog's name: Max
Dog's age: 3
Dog's breed: Labrador Retriever
```

## Resources

- [Structures in C](https://www.geeksforgeeks.org/structures-c/)
- [Typedef in C](https://www.geeksforgeeks.org/typedef-versus-define-c/)

