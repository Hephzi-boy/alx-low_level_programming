#include "main.h"
#include <stdlib.h>

/**
 * create_array - This program creates an array of size and assigns char c
 * @size: The size of the given array
 * @c: The character to assign
 * Description: To creat an array size and assign char c
 * Return: The pointer to array, NULL if there is failure
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
