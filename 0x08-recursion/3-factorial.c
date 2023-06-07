#include "main.h"

/**
 * factorial - Computes the factorial of a given number.
 * @n: The number to compute the factorial of.
 *
 * Return: The factorial of n.
 */
int	factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (factorial(n - 1) * n);
}
