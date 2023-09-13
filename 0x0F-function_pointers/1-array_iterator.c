#include "function_pointers.h"

/**
 * array_iterator - used to maps an array through founction pointer
 *
 * @array: array to execute func on
 *
 * @size: size of the array
 *
 * @action:  is a pointer function
 *
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array && action)
	{
		x = 0;
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
