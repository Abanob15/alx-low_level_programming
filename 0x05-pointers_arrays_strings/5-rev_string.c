#include "main.h"

/**
 * print_rev - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: void
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
