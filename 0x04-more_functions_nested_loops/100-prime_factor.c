#include <stdio.h>

/**
 * main - prints the highest prime factor of 612852475143
 *
 * Return: 0 if successful
 */

int main(void)
{
	unsigned long int num = 3;
	unsigned long int primNum = 612852475143;

	while (num <= primNum / 2)
		if (primNum % num == 0)
			primNum = primNum / num;
		else
			num += 2;

	printf("%ld\n", primNum);

	return (0);
}
