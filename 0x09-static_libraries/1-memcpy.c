#include "main.h"

/**
 * _memcpy - This program prints the function that copies memory area
 * @dest: The memory stored
 * @src: The memory copied
 * @n: The number of bytes
 * Return: memory copied with a changed n byte
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int g = 0;
	int w = n;

	for (; g < w; g++)
	{
		dest[g] = src[g];
		n--;
	}
	return (dest);
}
