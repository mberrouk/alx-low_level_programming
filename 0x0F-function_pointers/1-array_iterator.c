#include "function_pointers.h"

/**
 * array_iterator - Iterates over an array and applies the provided
 * action function to each element.
 *
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: A function pointer to a void function that
 * takes an int as an argument.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	if (!array || !action)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
