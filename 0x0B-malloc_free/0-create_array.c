#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and
 * initializes it with a specific char
 *
 * @size: the size of the array
 *
 * @c: initial value
 *
 * Return: pointer to array or NULL if fail
*/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = (char *)malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
