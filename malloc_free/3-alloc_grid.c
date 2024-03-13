#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: The number of elements in each row of the array.
 * @height: The number of rows in the array.
 *
 * Return: If width or height is 0 or negative, return NULL.
 *         On success, return a pointer to the newly allocated array.
 *         If malloc fails, return NULL.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
