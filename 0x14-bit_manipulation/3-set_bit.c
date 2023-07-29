#include "main.h"

/**
 * set_bit - sets bit
 * @n: ptr
 * @index: index of the bit
 *
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int tmp;

	if (index > 63)
		return (-1);
	tmp = 1 << index;
	*n = (*n | tmp);
	return (1);
}
