#include "main.h"

/**
 * print_diagonal - printing lines diagonal
 *
 * @n: input variable
 *
 * Return: void
*/

void print_diagonal(int n)
{
	int turn, tab;

	if (n <= 0)
		_putchar('\n');
	for (turn = 0; turn < n; turn++)
	{
		for (tab = 0; tab < turn; tab++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
