#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: the number of parameters
 * @...: variable number of parameters to sum
 *
 * Return: the sum of all parameters. If n == 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	int i;
	int res;

	i = 0;
	res = 0;
	va_start(va, n);
	if (!n)
		return (0);
	while (i < (int)n)
	{
		res += va_arg(va, int);
		i++;
	}
	va_end(va);
	return (res);
}
