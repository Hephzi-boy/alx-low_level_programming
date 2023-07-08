#include "main.h"

/**
 * _isupper - This program prints all letters in uppercase when returned
 * @c: The char to be checked
 * Return: 1 if uppercase is returned, else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
