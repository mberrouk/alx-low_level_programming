#include "main.h"

/**
 * array_range - creates an array
 * @min: minimum value contained
 * @max: maximum value contained
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int size;
	int i;
	int *s;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	s = malloc(sizeof(int) * size);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = min;
		i++;
		min++;
	}
	return (s);
}
