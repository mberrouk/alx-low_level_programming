#include "main.h"

/**
 * strlen_recursion - returns the length of a string. 
 * @s: The string to measure the length of.   
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (!s || !*s)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
