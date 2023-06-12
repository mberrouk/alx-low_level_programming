#include "main.h"

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
			return (NULL);
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
