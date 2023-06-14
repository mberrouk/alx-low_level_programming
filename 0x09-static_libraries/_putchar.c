#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @c: the character to write
 *
 * Return: the number of characters written (always 1).
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

