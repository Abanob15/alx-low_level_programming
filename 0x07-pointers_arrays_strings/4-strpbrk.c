#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: the string
 *
 * @accept: matches one of the bytes or to NULL if no such byte found
 *
 * Return: pointer to byte
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
