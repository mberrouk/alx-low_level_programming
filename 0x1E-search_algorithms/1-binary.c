#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm.
 * @array: the integer array.
 * @size: size of array.
 * @value: to search for.
 *
 * Return: index where value is located or -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t middle, i;

	if (!array || !size)
		return (-1);
	while (left <= right)
	{
		for (i = left, printf("Searching in array: "); i <= right; i++)
			printf("%d%s", array[i], i < right ? ", " : "\n");
		if (left == right && array[left] == value)
			return (left);
		else if (left == right)
			return (-1);
		middle = left + (right - 1) / 2;
		if (array[middle] == value)
			return (middle);
		if (array[middle] > value)
			right = middle - 1;
		else
			left = middle + 1;
	}
	return (-1);
}
