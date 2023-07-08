#include "main.h"

/**
 * _strstr - This program prints every point
 * @haystack: The input
 * @needle: The input
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *e = haystack;
		char *f = needle;

		while (*e == *f && *f != '\0')
		{
			e++;
			f++;
		}
		if (*f == '\0')
			return (haystack);
	}
	return (0);
}
