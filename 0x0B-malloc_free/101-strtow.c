#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grids - frees all previously allocated memory
 * @tab: the 2 dimensional array to free
 *
 * Return: NULL
 */
void *free_grids(char **tab)
{
	int i;

	i = 0;
	for (; tab[i]; i++)
		free(tab[i]);
	free(tab);
	return (NULL);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a 2D array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int size;
	int i;
	int j;
	int k;

	if (!str || !*str)
		return (NULL);
	size = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i - 1 > -1  && str[i - 1] == ' '))
			size++;
	}
	words = malloc(sizeof(char *) * (size + 1));
	if (!words)
		return (NULL);
	words[size] = NULL;
	k = 0;
	for (i = 0; str[i]; i++)
	{
		for (; str[i] == ' '; i++)
			;
		if (!str[i])
			break;
		for (j = 0; str[i + j] && str[i + j] != ' '; j++)
			;
		words[k] = malloc(sizeof(char) * (j + 1));
		if (!words[k])
			return (free_grids(words));
		for (j = 0; str[i + j] && str[i + j] != ' '; j++)
			words[k][j] = str[i + j];
		words[k][j] = '\0';
		k++;
		i += j;
	}
	return (words);
}
