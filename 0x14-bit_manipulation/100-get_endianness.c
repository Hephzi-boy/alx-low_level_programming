#include "main.h"

/**
 * get_endianness - This program checks if a machine is little or big
 * Return: 0 for big, for little is 1
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
