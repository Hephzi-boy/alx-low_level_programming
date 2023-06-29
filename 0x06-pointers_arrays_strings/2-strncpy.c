#include "main.h"

/**
 * _strncpy - This program prints a function that copies a string
 * @dest: The destination string pointer
 * @src: The source string pointer
 * @n: The number of bytes to be used
 * Return: The pointer to string destination
 */

char *_strncpy(char *dest, char *src, int n)
{
int index = 0, src_len = 0;

while (src[index++])
src_len++;

for (index = 0; src[index] && index < n; index++)
dest[index] = src[index];

for (index = src_len; index < n; index++)
dest[index] = '\0';

return (dest);
}
