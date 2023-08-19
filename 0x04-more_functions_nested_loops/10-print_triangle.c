#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: 0 (success)
*/

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (z = size - row; z >= 1; z--)
			{
				_putchar(' ');
			}
			for (y = 1; y <= row; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
