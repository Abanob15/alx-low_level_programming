#include "main.h"

/**
 * _atoi - converts a string to an interger
 *
 * @S: string input parameter
 *
 * Return: converted integer from string
*/

int _atoi(char *S)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*S == '-')
			sign *= -1;
		else if (*S >= '0' && *S <= '9')
			num = (num * 10) + (*S - '0');
		else if (num > 0)
			break;
	} while (*S++);

	return (num * sign);
}
