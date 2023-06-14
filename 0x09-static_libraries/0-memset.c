#include "main.h"

/**
 * _memset - fills the first n bytes of memory pointed to by s
 *           with the constant byte b.
 *
 * @s: pointer to the memory area to be filled
 * @b: the byte to fill the memory area with
 * @n: the number of bytes to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	if (!s)
		return (NULL);
	i = 0;
	while ((unsigned int)i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
