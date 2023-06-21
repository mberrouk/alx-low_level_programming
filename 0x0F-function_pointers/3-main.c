#include "3-calc.h"

/**
 * main - program for calc
 *
 * @ac: number of args
 * @av: args
 *
 * Return: 0 on Success
 */
int main(int ac, char *av[])
{
	int n1;
	int n2;
	int (*fun)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		return (98);
	}
	if ((av[2][0] != '+' && av[2][0] != '-' && av[2][0] != '/'
		&& av[2][0] != '*' && av[2][0] != '%') || av[2][1])
	{
		printf("Error\n");
		return (99);
	}
	n1 = atoi(av[1]);
	n2 = atoi(av[3]);
	if ((!n2 || !n1) && (av[2][0] == '/' || av[2][0] == '%'))
	{
		printf("Error\n");
		return (100);
	}
	fun = get_op_func(av[2]);
	printf("%d\n", fun(n1, n2));
	return (0);
}
