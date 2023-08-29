#include "main.h"

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 *
 * @a: pointer to start of matrix
 *
 * @size: width of matrix column
 *
 * Return: void
*/

void print_diagsums(int *a, int size)
{
	int i, x, p, z = 0, y = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		z += *(a + p);
	}
	for (x = 0; x < size; x++)
	{
		p = (x * size) + (size - 1 - x);
		y += *(a + p);
	}
	printf("%i, %i\n", z, y);
}
