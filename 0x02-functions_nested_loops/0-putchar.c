#include "main.h"

/**
 * main - Enrty point
 *
 * Description: print _putchar using putchar prototype
 *
 * Return: 0 (Success)
*/
int main(void)
{
	char str[] = "_putcahr";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
