#include "main.h"

/**
 * check_prim - Determines if a number is prime by checking its divisors
 * @n: The number to check
 * @div: The current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prim(int n, int div)
{
	if (div > n / 2)
		return (1);
	else if (!(n % div))
		return (0);
	return (check_prim(n, div + 1));
}

/**
 * is_prime_number - Determines if a number is prime
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	return (check_prim(n, 2));
}
