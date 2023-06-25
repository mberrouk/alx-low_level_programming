#include "variadic_functions.h"

/**
 * print_strings - Prints a variable number of strings
 * separated by a given separator
 * @separator: The string used to separate the strings
 * @n: The number of strings to be printed
 * @...: Variable arguments representing the strings to be printed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list va;
	char *str;
	int i;

	va_start(va, n);
	i = 0;
	while (i < (int)n)
	{
		str = va_arg(va, char *);
		if (!str)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator && i < (int)n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
}
