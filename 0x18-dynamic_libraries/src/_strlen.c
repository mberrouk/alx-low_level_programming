#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: The string to measure the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	if (!s || !*s)
		return (0);
	return (_strlen(s + 1) + 1);
}
