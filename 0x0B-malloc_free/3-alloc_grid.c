#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: 2d array
 */

int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	ptr = malloc(height * sizeof(*ptr));

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			ptr[i] = malloc(width * sizeof(**ptr));
			if (ptr[i] == NULL)
			{
				for (j = 0; j < i; j++)
				free(ptr[j]);
				free(ptr);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				ptr[i][j] = 0;
		}
	}
	return (ptr);
}
