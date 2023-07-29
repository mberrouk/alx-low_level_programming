#include "main.h"

/**
 * binary_to_uint - convert binary
 * @b: ptr
 *
 * Return: number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	unsigned int power;
	int i;

	if (b == NULL)
		return (0);
	i = 0;
	result = 0;
	power = 1;
	for (; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	i -= 1;
	for (; i >= 0; i--, power *= 2)
	{
		if (b[i] == '1')
			result += power;
	}
	return (result);
}

