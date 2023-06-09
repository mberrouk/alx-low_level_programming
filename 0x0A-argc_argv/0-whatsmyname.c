#include "main.h"

/**
 * main -  program that prints its name, followed by a new line
 * @ac: The number of arguments passed to the program
 * @av: An array of strings containing the arguments passed to the program
 *
 * Return: Always 0
 */
int main(int ac, char *av[])
{
	int i;

	(void)ac;
	for (i = 0; av[0][i]; i++)
		write(STDOUT_FILENO, &av[0][i], 1);
	write(STDOUT_FILENO, "\n", 1);
	return (0);
}
