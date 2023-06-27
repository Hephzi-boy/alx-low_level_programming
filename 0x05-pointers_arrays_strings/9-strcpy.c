#include "main.h"

/**
 * _strcpy - This program copies the string pointed to by src
 * @dest: This is the char type of string
 * @src: This is the char type of string
 * Description: This copies the string pointed to the pointer `src` to the buffer pointed to by `dest`
 * Return: Pointer to `dest
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');

	return (dest);
}
