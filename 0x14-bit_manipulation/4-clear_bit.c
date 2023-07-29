#include "main.h"

/**
 * clear_bit - clear bit 
 * @n: pointer
 * @index: index of bit
 *
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int tmp;

	if (index > 63)
		return (-1);
	tmp = 1 << index;
	if (*n & tmp)
		*n ^= tmp;
	return (1);
}
