#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string.
 *
 * @s: Pointer to the string to be searched.
 * @c: Character to be located.
 *
 * Return: Pointer to the first occurrence of the character
 * in the string, or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int	i;
	int	size;

	i = 0;
	size = _strlen(s);
	if ((char)c == '\0')
		return (&((char *)s)[size]);
	if (c < 0)
		return (NULL);
	while (((char *)s)[i] != '\0')
	{
		if (((char *)s)[i] == (char)c)
			return (&((char *)s)[i]);
		i++;
	}
	return (NULL);
}
