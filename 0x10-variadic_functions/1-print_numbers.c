#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers with a separator
 * @separator: The separator string
 * @n: The number of arguments that follow
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list va;

	i = 0;
	va_start(va, n);
	while (i < (int)n)
	{
		printf("%d", va_arg(va, int));
		if (separator && i < (int)n - 1)
			printf("%s", separator);
		i++;
	}
	va_end(va);
	printf("\n");
}

