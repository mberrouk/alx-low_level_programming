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

/**
 * check_str - returns 1 if a string is a palindrome or 0
 * @s: string
 * @size: length of a string
 * @i: Forward Index
 * @j: Inverted Index
 *
 * Return: 0 or 1
 */
int check_str(char *s, int size, int i, int j)
{
	if ((size - 1) - j >= size / 2)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (check_str(s, size, i + 1, j - 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome or 0
 * @s: string
 *
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int size;

	if (!s || !*s)
		return (1);
	size = _strlen(s);
	return (check_str(s, size, 0, size - 1));
}
