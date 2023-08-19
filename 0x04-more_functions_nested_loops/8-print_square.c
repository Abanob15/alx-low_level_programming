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
	int lenght, hight;

	if (size <= 0)
		_putchar('\n');

	for (lenght = 0; lenght < size; lenght++)
	{
		for (hight = 0; hight < (size); hight++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
