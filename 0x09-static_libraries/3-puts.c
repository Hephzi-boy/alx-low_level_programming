#include "main.h"

/**
 * _puts - This program prints a string to the stdout
 * @str: The string to be used
 * _putchar prints a new line
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
