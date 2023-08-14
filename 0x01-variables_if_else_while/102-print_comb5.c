#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: write a program that
 * print all possible diffrant combinations of two digits.
 * Return: 0 (Success)
*/

int main(void)
{
	int 1stDigit = 0, 2nDigit;

	while (1stDigit <= 99)
	{
		2ndDigit = 1stDigit;
		while (2nDigit <= 99)
		{
			if (2nDigit != 1stDigit)
			{
				putchar((1stDigit / 10) + 48);
				putchar((1stDigit % 10) + 48);
				putchar(' ');
				putchar((2nDigit / 10) + 48);
				putchar((2nDigit % 10) + 48);

				if (1stDigit != 98 || 2nDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			2nDigit++;
		}
		1stDigit++;
	}
	putchar('\n');

	return (0);
}
