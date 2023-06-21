#include "function_pointers.h"

/**
 * print_name - Prints the name using the
 * provided function pointer.
 *
 * @name: The name to be printed.
 * @f: A function pointer to a void function
 * that takes a char pointer as an argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
