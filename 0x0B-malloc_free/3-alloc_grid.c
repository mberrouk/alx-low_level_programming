#include "main.h"

/**
 * free_all_on_malloc_failure - frees all previously allocated memory
 * @tab: the 2 dimensional array to free
 *
 * Return: NULL
 */
void *free_all_on_malloc_failure(int **tab)
{
	int i;

	i = 0;
	for (; tab[i]; i++)
		free(tab[i]);
	free(tab);
	return (NULL);
}

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to the 2 dimensional array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **tab;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	tab = malloc(sizeof(int *) * height);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < height)
	{
		tab[i] = malloc(sizeof(int) * width);
		if (!tab[i])
			return (free_all_on_malloc_failure(tab));
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (tab);
}
