#include "main.h"

/**
 * _strpbrk - This program prints every point
 * @s: The input
 * @accept: The input
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int d;

	while (*s)
	{
		for (d = 0; accept[d]; d++)
		{
			if (*s == accept[d])
			return (s);
		}
	s++;
	}
	return ('\0');
}
