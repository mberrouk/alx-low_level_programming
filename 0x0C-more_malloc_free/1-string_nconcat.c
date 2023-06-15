#include "main.h"

/**
 * ft_strlen - Calculates the length of a string.
 *
 * @str: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int ft_strlen(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

/**
 * string_nconcat - Concatenates two strings up to n bytes of s2.
 *
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 * @n: The maximum number of bytes of s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size;
	char *s;

	i = 0;
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	s = malloc(sizeof(char) * size);
	if (!s)
		return (NULL);
	while (s1 && s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j] && j < n)
	{
		s[i + j] = s2[j];
		j++;
	}
	s[i + j] = '\0';
	return (s);
}
