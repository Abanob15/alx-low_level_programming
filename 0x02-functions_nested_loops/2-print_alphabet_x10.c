#include"main.h"

/**
 * print_alphabet_x10 - using _putchar function that prints the
 * alphabet 10 times ,in lowercase, followed by a new line.
 *
*/

void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
