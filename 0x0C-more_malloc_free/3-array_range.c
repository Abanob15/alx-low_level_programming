#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 *
 * @min: minimum range of values stored
 *
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to new array and Null if fail
*/

int *array_range(int min, int max)
{
	int *r;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	r = malloc(sizeof(int) * size);

	if (r == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		r[i] = min++;

	return (r);
}
