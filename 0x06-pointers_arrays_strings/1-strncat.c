#include "main.h"

/**
 * *_strncpy - a function that concatenates two strings
 *
 * @dest: destination
 * @src: source
 * @n: most number of bytes from @src
 *
 * Return: returns pointer to string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	/*find the size of the dest array*/
	while (dest[c])
		c++;

	/**
	 * src dose not need to be null termainated
	 * if it contains n or more bytes
	*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	/*null terminate dest*/
	dest[c + i] = '\0';

	return (dest);
}
