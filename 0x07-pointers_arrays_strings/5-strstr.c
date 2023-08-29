#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: the longer string to search
 *
 * @needle: the first occurrence of the substring
 *
 * Return: pointer to first occurence of string or null if not found
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, n = 0;

	while (haystack[i])
	{
		while (needle[n] && (haystack[i] == needle[0]))
		{
			if (haystack[i + n] == needle[n])
				n++;
			else
				break;
		}
		if (needle[n])
		{
			i++;
			n = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
