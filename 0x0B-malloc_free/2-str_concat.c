#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 *
 * @s1: string to concatenate
 *
 * @s2: other string to concatenate
 *
 * Return: pointer to new string or NULL if fail
*/

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, x = 0, n1 = 0, n2 = 0;

	while (s1 && s1[n1])
		n1++;
	while (s2 && s2[n2])
		n2++;

	s3 = malloc(sizeof(char) * (n1 + n2 + 1));
	if (s3 == NULL)
		return (NULL);

	i = 0;
	x = 0;

	if (s1)
	{
		while (i < n1)
		{
			s3[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (n1 + n2))
		{
			s3[i] = s2[x];
			i++;
			x++;
		}
	}
	s3[i] = '\0';

	return (s3);
}
