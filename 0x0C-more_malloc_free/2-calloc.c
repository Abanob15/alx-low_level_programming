#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of @nmemb elements of
 * @size bytes each and returns a pointer to the allocated memory
 *
 * @nmemb: allocate memory for array
 *
 * @size: allocate element of size bytes
 *
 * Return: pointer string
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);
	for (s = 0; s < (nmemb * size); s++)
		x[s] = 0;
	return (x);
}
