#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: the character to check
 *
 * Return: 256 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if ((int)c >= 'A' && (int)c <= 'Z')
		return (256);
	return (0);
}
