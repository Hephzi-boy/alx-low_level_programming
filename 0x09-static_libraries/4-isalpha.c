#include "main.h"

/**
 * _isalpha - This program prints the alphabetic character
 * @c: The character to be printed
 * Return: 1 if c is a letter and return 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
