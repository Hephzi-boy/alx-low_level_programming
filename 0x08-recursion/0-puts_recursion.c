#include "main.h"

/**
 * _puts_recursion - This program prints a string that follows a new line
 * @s: The string to be printed
 * Return: no return
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
