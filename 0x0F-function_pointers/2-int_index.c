#include "function_pointers.h"

/**
 * int_index - indexes searches for integar
 *
 * @array: array of int
 *
 * @size: size of array
 *
 * @cmp: function to compare
 *
 * Return: int value
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
