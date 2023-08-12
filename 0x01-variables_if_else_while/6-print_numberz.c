#include <stdio.h>

/**
 * main - entry point
 *
 * Description:print all single digit numbers by using putchar and int variable
 *
 * Return:0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representaion*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
