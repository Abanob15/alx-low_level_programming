#include"main.h"

/**
 * print_alphabet - using _putchar function that prints the alphabet,
 * in lowercase, followed by a new line.
 *
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
