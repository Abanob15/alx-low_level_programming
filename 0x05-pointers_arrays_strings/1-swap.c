#include "main.h"

/**
 * swap_int - sawaps the value of two integers
 * using two input parameter
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
