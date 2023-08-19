#include "main.h"

/**
 * print_square - print a square of size size
 * using the character '#'.
 *
 * @size: is the size of the sqaure
 *
 * Return: Always 0.
*/

void print_square(int size)
{
	int length, hight;

	for (length = 1; length <= size; length++)
	{
		for (hight = 1; hight <= size; hight++)
			_putchar('#');
		_putchar('\n');
	}
}
