#include "main.h"

/**
 * _puts - print string
 * @s: string
 */
void _puts(char *s)
{
	int i;

	i = 0;
	if (!s)
		return;
	while (s[i])
	{
		write(STDOUT_FILENO, &s[i], 1);
		i++;
	}
}
