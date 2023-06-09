#include "main.h"

/**
 * ft_putnbr - Prints an integer to standard output
 * @n: The integer to be printed
 */
void ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	write(STDOUT_FILENO, &"0123456789"[n % 10], 1);
}

/**
 * main - Prints the number of arguments passed to the program
 * @ac: The number of arguments passed to the program
 *
 * Return: Always 0
 */
int main(int ac, char *av[])
{
	ft_putnbr(ac);
	write(STDOUT_FILENO, "\n", 1);
	return (0);
}
