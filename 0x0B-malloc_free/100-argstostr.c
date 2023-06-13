#include "main.h"

/**
 * ft_strlen - Calculates the length of a string
 *
 * @str: Pointer to the string be measured
 *
 * Return: Length of the string
 */
int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/**
 * argstostr - Concatenates all the arguments of a program
 *             into a single string separated by a newline
 *
 * @ac: Number of arguments passed to the program
 * @av: Array of strings containing the arguments
 *
 * Return: Pointer to the concatenated string
 *         NULL if ac == 0, av == NULL, or malloc fails
 */
char *argstostr(int ac, char **av)
{
	char *new;
	int size;
	int i;
	int j;

	size = 0;
	if (!ac || !av)
		return (NULL);
	for (i = 0; av[i]; i++)
		size += ft_strlen(av[i]) + 1;
	new = malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	size = 0;
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			new[size] = av[i][j];
			size++;
		}
		new[size] = '\n';
		size++;
	}
	new[size] = '\0';
	return (new);
}
