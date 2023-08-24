#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 * @dest: destination
 * @src: source
 * Return: returns pointer to string dest
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of the dest array*/
	while (dest[c])
		c++;

	/* iterate trough each src array value without the null byte*/
	for (c2 = 0; src[c2] ; c2++)
		/*append src[c2] to dest[c] while overwriting the null byte in the dest*/
		dest[c++] = src[c2];

	return (dest);
}
