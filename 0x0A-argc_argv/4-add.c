#include "main.h"

/**
 * ft_putnbr - Prints an integer to standard output
 * @n: The integer to be printed
 */
void ft_putnbr(int n)
{
	if (n < 0)
	{
		write(STDOUT_FILENO, "-", 1);
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	write(STDOUT_FILENO, &"0123456789"[n % 10], 1);
}

/**
 * ft_atoi - Converts a string to an integer
 * @str: The string to be converted
 *
 * Return: The integer value of the string
 */
int ft_atoi(char *str)
{
	int num;
	int i;

	num = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			write(STDOUT_FILENO, "Error\n", 6);
			exit(1);
		}
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num);
}

/**
 * main - A program that takes in command line arguments and adds them.
 * @ac: The number of command line arguments.
 * @av: An array of strings containing the command line arguments.
 *
 * Return: 0 or 1
 */
int main(int ac, char *av[])
{
	int i;
	int num;

	num = 0;
	if (ac == 1)
	{
		write(STDOUT_FILENO, "0\n", 2);
		return (0);
	}
	for (i = 1; av[i]; i++)
		num += ft_atoi(av[i]);
	ft_putnbr(num);
	write(STDOUT_FILENO, "\n", 1);
	return (0);
}
