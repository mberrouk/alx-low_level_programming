#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome or 0
 * @s: string
 *
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int size;
	int j;
	int i;

	if (!s || !*s)
		return (1);
	size = 0;
	while (s[size])
		size++;
	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		if (s[i] != s[j])
			return (0);
		i++;
		j--;
	}
	return (1);
}
