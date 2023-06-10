#include "main.h"

/**
 * main - A program that calculates the minimum number of coinst
 *  make change for a given amount of money.
 * @ac: The number of command line arguments.
 * @av: An array of strings containing the command line arguments.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	int num;
	int j;
	int tab[5];
	int i;

	if (ac != 2)
	{
		write(STDOUT_FILENO, "Error\n", 6);
		return (1);
	}
	num = atoi(av[1]);
	if (num <= 0)
	{
		write(STDOUT_FILENO, "0\n", 2);
		return (0);
	}
	j = 0;
	tab[0] = 25;
	tab[1] = 10;
	tab[2] = 5;
	tab[3] = 2;
	tab[4] = 1;
	for (i = 0; i < 5; i++)
	{
		for ( ; num / tab[i]; i++)
		{
			j += num / tab[i];
			num %= tab[i];
		}
	}
	printf("%d\n", j);
	return (0);
}
