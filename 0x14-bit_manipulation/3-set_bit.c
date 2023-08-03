#include "main.h"

/**
 * set_bit - This program sets a bit at a given index to 1
 * @n: The pointer to the number to change
 * @index: The index of the bit to set to 1
 * Return: 1 for succes, for failure is -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
