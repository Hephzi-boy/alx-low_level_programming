#include "main.h"

/**
 * _strncpy - This program prints a copy of a string
 * @dest: The value inputed
 * @src: The value inputed
 * @n: The value inputed
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int h = 0;

	while (h < n && src[h] != '\0')
	{
		dest[h] = src[h];
		h++;
	}
	while (h < n)
	{
		dest[h] = '\0';
		h++;
	}
	return (dest);
}
