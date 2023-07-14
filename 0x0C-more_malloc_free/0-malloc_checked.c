#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - This program allocates memory using malloc
 * @b: The actual number of bytes to be allocated
 * Return: The pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
