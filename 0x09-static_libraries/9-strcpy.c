#include "main.h"

/**
 * char *_strcpy - This program prints string pointed by src
 * @dest: Copy to
 * @src: Copy from
 * Return: The string value
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
