#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array and returns the
 * index of the first occurrence that matches the comparison function.
 *
 * @array: The array to search in.
 * @size: The size of the array.
 * @cmp: A function pointer to an int function that takes an
 * int as an argument and returns an int.
 *
 * Return: The index of the first occurrence that matches the
 * comparison function, or -1 if no match is found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
