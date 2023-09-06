#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - creates a two dimensional array of ints
 *
 * @width: width of the matrix
 *
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix or NULL if fail
*/

int **alloc_grid(int width, int height)
{
	int **a;
	int i, x;

	if (height <= 0 || width <= 0)
		return (NULL);

	a = (int **) malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = (int *) malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			free(a);
			for (x = 0; x <= i; x++)
				free(arr[x]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (x = 0; x < width; x++)
		{
			a[i][x] = 0;
		}
	}
	return (a);
}

