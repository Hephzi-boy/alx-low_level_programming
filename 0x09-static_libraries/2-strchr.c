#include "main.h"

/**
 * _strchr - This program prints the entry point
 * @s: The value inputed
 * @c: The value inputed
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int b = 0;

	for (; s[b] >= '\0'; b++)
	{
		if (s[b] == c)
			return (&s[b]);
	}
	return (0);
}
