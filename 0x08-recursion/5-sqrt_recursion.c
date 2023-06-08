#include "main.h"


/**
 * computes_sqrt - Computes the square root of an integer
 *
 * @n: the integer input
 * @sqrt: initial guess
 *
 * Return: the square root of n, or -1 on failure
 */
int computes_sqrt(int n, int sqrt)
{
	if (sqrt > n / 2)
		return (-1);
	if ((sqrt * sqrt) == n)
		return (sqrt);
	computes_sqrt(n, sqrt + 1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The square root of the number, or -1 if n does not have a natural
 * square root.
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (computes_sqrt(n, 2));
}
