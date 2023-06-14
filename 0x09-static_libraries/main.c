#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{

	(void) ac;
	printf("%d\n", islower(av[1][0]));
	printf(" my == %d\n", _islower(av[1][0]));
    return (0);
}

