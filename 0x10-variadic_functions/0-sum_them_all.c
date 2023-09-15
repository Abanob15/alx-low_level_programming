#include "variadic_functions.h"

/**
 * sum_them_all - adds all the numbers
 *
 * @n: number of parameters passed
 *
 * Return: (0)
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list sa;

	va_start(sa, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(sa, int);

	va_end(sa);

	return (sum);
}
