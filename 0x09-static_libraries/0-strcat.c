#include "main.h"

/**
 * _strcat - This program prints the concatenation of two strings
 * @dest: The value that is entered
 * @src: The value that is entered
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int p;
	int r;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	r = 0;
	while (src[r] != '\0')
	{
		dest[p] = src[r];
		p++;
		r++;
	}
	dest[p] = '\0';
	return (dest);
}
