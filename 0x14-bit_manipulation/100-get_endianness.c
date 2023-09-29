#include <stddef.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: if big endian (0) and if little endian (1)
*/

int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return (*c);
}
