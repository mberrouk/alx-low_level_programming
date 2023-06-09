#include "main.h"

int main(int ac, char *av[])
{
	int i;

	for (i = 0; av[0][i]; i++)
		write(STDOUT_FILENO, &av[0][i], 1);
	write(STDOUT_FILENO, "\n", 1);
}
