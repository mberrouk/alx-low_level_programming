#include "main.h"

/**
 * _memcpy - copy n bytes from src to dest
 * @dest: pointer to destination buffer
 * @src: pointer to buffer
 * @n: number of bytes to copy
 *
 * Return: a pointer to the destination buffer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (!dest && !src)
		return (0);
	if (dest == src)
		return (dest);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
