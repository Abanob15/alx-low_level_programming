#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
 * flip_bits - flip to get from one number to another
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: number of bits you need to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int n, i;

	u = 0;
	result = 1;
	differnce = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (differnce & result))
			u++;
		result <<= 1;
	}

	return (u);
}
