#include "main.h"

/**
 * _strlen - This program prints the length of a string
 * @s: The string used
 * Return: The length
 */

int _strlen(char *s)
{
	int longa = 0;

	while (*s != '\0')
	{
		longa++;
		s++;
	}
	return (longa);
}
