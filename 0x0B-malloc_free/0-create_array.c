#include "main.h"

/**
 * create_array - create an array of chars,
 * and initializes it with a specific char.
 *
 * @size: The size to allocate
 * @c: char
 *
 * Return: array of chars, or NULL
 */
char	*create_array(unsigned int size, char c)
{
	unsigned int i;
	char *new;

	if (!size)
		return (NULL);
	new = malloc(sizeof(char) * size);
	if (!new)
		return (NULL);
	for (i = 0; i < size; i++)
		new[i] = c;
	return (new);
}
