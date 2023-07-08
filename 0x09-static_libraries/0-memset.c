#include "main.h"

/**
 * _memset - This program prints a special value to a memory
 * @s: The starting memory to print
 * @b: The special value
 * @n: The number of bytes
 * Return: change array to a new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
