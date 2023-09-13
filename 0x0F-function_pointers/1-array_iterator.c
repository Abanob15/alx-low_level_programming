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
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
