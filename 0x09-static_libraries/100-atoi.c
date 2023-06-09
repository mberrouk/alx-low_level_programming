#include "main.h"

/**
 * _convert - Converts a string of digits to an integer.
 *
 * @s1: Pointer to the string to be converted.
 * @sign: Sign of the integer to be returned.
 *
 * Return: The converted integer.
 */
int	_convert(const char *s1, int sign)
{
	int				i;
	unsigned long	r;

	r = 0;
	i = 0;
	while (s1[i] >= 48 && s1[i] <= 57)
	{
		if (r > __LONG_MAX__)
			break;
		r = r * 10 + (s1[i] - '0');
		i++;
	}
	if (r > __LONG_MAX__)
	{
		if (sign < 0)
			return (0);
		return (-1);
	}
	return (r * sign);
}

/**
 * _atoi - Converts a string to an integer.
 *
 * @str: Pointer to the string to be converted.
 *
 * Return: The converted integer.
 */
int	_atoi(char *str)
{
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	return (_convert(&str[i], sign));
}
