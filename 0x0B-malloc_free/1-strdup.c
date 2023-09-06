#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 *
 * @str: string to duplicate
 *
 * Return: pointer to the copied string or NULL if fail
*/

char *_strdup(char *str)
{
	char *d;
	unsigned int i, n;

	i = 0;
	n = 0;

	if (str == NULL)
		return (NULL);

	while (str[n])
		n++;

	d = malloc(sizeof(char) * (n + 1));

	if (d == NULL)
		return (NULL);

	while ((d[i] = str[i]) != '\0')
		i++;

	return (d);
}
