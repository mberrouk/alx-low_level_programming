#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 *
 * @s: Pointer to the string to be measured.
 *
 * Return: The length of the string.
 */
int	_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
