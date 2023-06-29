#include "main.h"

/**
 * _strcat - This program prints the function that concatenates two strings
 * @dest: This is the destination string pointer
 * @src: This is the source string pointer
 * Return: Pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
	int length_of_string, z;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
	length_of_string++;
	}
	for (z = 0; src[z] != '\0'; z++, length_of_string++)
	{
	dest[length_of_string] = src[z];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
