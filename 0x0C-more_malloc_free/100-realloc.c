#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated
 * @old_size: Size of the allocated space for ptr
 * @new_size: Size of the new memory block
 *
 * Return: Pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int i;

	i = 0;
	if (new_size && old_size == new_size && ptr)
	{
		if (ptr)
			return (ptr);
		new = malloc(new_size);
		return (ptr);
	}
	else if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size);
	if (!new)
	{
		free(ptr);
		return (NULL);
	}
	while (i < old_size && i < new_size && ptr)
	{
		((unsigned char *)new)[i] = ((unsigned char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (new);
}
