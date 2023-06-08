#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: The string to measure the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (!s || !*s)
		return (0);
	return (_strlen(s + 1) + 1);
}

/**
 * skip_stars - returns a pointer to the last occurrence of the character c
 * in the string s1, or NULL if c is not found
 *
 * @s1: the string to search
 * @c: the character to search for
 * @size: the size of the string s1
 *
 * Return: a pointer to the last occurrence of the character c in the string
 * s1, or NULL if c is not found
 */
char *skip_stars(char *s1, char c, int size)
{
	if (size == -1)
		return (NULL);
	if (s1[size] == c)
		return (&s1[size]);
	return (skip_stars(s1, c, size - 1));
}

/**
 * skip - returns a pointer to the first non-star character in the string s2
 *
 * @s2: the string to search
 *
 * Return: a pointer to the first non-star character in the string s2
 */
char *skip(char *s2)
{
	if (*s2 != '*' || !*s2)
		return (s2);
	return (skip(s2 + 1));
}


/**
 * wildcmp - compares two strings s1 and s2, where s2 may contain the wildcard
 * character '*'
 *
 * @s1: the first string to compare
 * @s2: the second string to compare, which may contain the wildcard char '*'
 *
 * Return: 1 if the strings match, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (*s2 == '*')
	{
		s2 = skip(s2);
		if (!*s2)
			return (1);
		s1 = skip_stars(s1, *s2, _strlen(s1) - 1);
		if (!s1)
			return (0);
	}
	else if (*s1 != *s2)
		return (0);
	return (wildcmp(s1 + 1, s2 + 1));
}
