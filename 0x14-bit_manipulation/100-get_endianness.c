#include "main.h"

/**
 * get_endianness - get endianness
 *
 * Return: 0 big endian or 1 otherwise
 */
int get_endianness(void)
{
	unsigned int num;
	int result;
	char *mem;

	num = 1;
	mem = (char *) &num;
	result = (int) *mem;
	return (result);
}
