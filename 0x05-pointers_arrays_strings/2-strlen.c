#include "main.h"

/**
 * _strlen - This program checks the actual length of the string
 * @s: The string that will be checked and printed
 * Return: Always 0
 */

int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
