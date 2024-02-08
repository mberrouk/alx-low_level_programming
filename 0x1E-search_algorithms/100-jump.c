#include "search_algos.h"

/**
 * min - give the min of two values.
 * @x: unsigned integer.
 * @y: unsigned integer.
 *
 * Return: the min.
 */
size_t min(size_t x, size_t y)
{
	return (x <= y ? x : y);
}

/**
 * jump_search - searches for a value in a sorted array
 * using the Jump Search.
 * @array: sorted array of integers.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: the first index where value is located or -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, step = sqrt(size), b = step;

	if (!array || !size)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", a, array[a]);
	while (array[min(b, size - 1)] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", b, array[b]);
		a = b;
		b += step;
		if (a + step >= size)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", a, b);

	while (a <= min(b, size - 1))
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		a++;
	}

	return (-1);
}
