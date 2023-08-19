#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character should be printed
*/

void print_diagonal(int n)
{
	int post, space;

	if (n <= 0)
		_putchar('\n');
	for (post = 0; post < n; post++)
	{
		for (space = 0; space < post; space++)
		{
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
