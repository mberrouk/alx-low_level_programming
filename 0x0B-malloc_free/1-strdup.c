#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to copy
 *
 * Return: a pointer to the newly allocated memory, or NULL.
 */
char *_strdup(char *str)
{
	char *new;
	unsigned int i;
	unsigned int j;

	if (!str)
		return (NULL);
	while (str[i])
		i++;
	new = malloc(sizeof(char) * (i + 1));
	if (!new)
		return (NULL);
	j = 0;
	while (i > j)
	{
		new[j] = str[j];
		j++;
	}
	new[j] = '\0';
	return (NULL);
}
