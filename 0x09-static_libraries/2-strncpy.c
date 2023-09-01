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
	int i;

	/**
	 * iterate through src array
	 * where if there is ni null byte
	 * among the frist n bytes os source
	 * the string placed in dest will not be null terminated
	*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * if the lenght of source is less than n
	 * wrinte additional nullbytes to dest
	 * to makesure that the total n bytes is written
	*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
