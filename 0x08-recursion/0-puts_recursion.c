#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line, using recursion.
 *
 * @s: The string to be printed.
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (!s || !*s)
	{
		if (!*s)
			write(STDOUT_FILENO, "\n", 1);
		return;
	}
	write(STDOUT_FILENO, s, 1);
	_puts_recursion(s + 1);
}
