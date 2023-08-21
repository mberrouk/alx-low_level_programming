#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by src
 * to the end of the string pointed to by dest.
 *
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the destination string.
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	for (len = 0; dest[len]; len++)
		;
	for (i = 0; src[i]; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
