#include "main.h"

/**
 * _strncat - This program prints a function that concatenates two strings
 * @dest: The value entered
 * @src: The value entered
 * @n: The value entered
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int d;
	int e;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	e = 0;
	while (e < n && src[e] != '\0')
	{
	dest[d] = src[e];
	d++;
	e++;
	}
	dest[d] = '\0';
	return (dest);
}
