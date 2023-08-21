#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: a pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
	unsigned int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
