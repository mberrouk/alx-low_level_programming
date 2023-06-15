#include "main.h"

/**
 * _calloc - Allocates memory for an array using
 * malloc and initializes it to 0.
 *
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 *
 * Return: A pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new;
	unsigned int i;

	i = 0;
	if (!nmemb || !size)
		return (NULL);
	new = malloc(nmemb * size);
	if (!new)
		return (NULL);
	while (i < (nmemb * size))
	{
		new[i] = 0;
		i++;
	}
	return (new);
}
