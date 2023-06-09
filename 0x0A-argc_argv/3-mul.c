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
	int sign;
	int i;

	num = 0;
	i = 0;
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

/**
 * main - Multiplies two numbers passed as arguments and prints the result
 * @ac: The number of arguments passed to the program
 * @av: An array of strings containing the arguments passed to the program
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int ac, char *av[])
{
	if (ac != 3)
	{
		write(STDOUT_FILENO, "Error\n", 6);
		return (1);
	}
	ft_putnbr(ft_atoi(av[1]) * ft_atoi(av[2]));
	write(STDOUT_FILENO, "\n", 1);
	return (0);
}
