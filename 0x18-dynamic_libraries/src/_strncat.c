#include "main.h"

/**
 * _strncat - Concatenates a specified number of characters
 * from one string to another.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to be concatenated from
 * the source string to the destination string.
 *
 * Return: Pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	for (dest_len = 0; dest[dest_len]; dest_len++)
		;
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
