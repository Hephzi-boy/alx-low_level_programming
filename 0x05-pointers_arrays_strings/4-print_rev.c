#include "main.h"

/**
 * print_rev - This program prints a string, in a reverse format
 * @s: This is used as a string reference pointer
 * Return: Always 0
 */

void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
