#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char	*new;
	int		size;
	int		i;
	int		j;

	size = 0;
	j = 0;
	for (; s1 && s1[size]; size++)
		;
	for (; s2 && s2[j]; j++)
		;
	size += j;
	new = malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	i = 0;
	for (; s1 && s1[i]; i++)
		new[i] = s1[i];
	j = 0;
	for (; s2 && s2[j]; j++)
		new[i + j] = s2[j];
	new[i + j] = '\0';
	return (new);
}
