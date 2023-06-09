#include "main.h"

/**
 * main - Prints all arguments passed to the program, one per line
 * @ac: The number of arguments passed to the program
 * @av: An array of strings containing the arguments passed to the program
 *
 * Return: Always 0
 */
int main(int ac, char *av[])
{
	int i;
	int j;

	(void) ac;
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
			write(STDOUT_FILENO, &av[i][j], 1);
		write(STDOUT_FILENO, "\n", 1);
	}
	return (0);
}
