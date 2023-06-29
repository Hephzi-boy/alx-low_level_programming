#include "main.h"

/**
 * reverse_array - This function reverses the content of an array of integers.
 * @a: The pointer to an array.
 * @n: The number of elements of an array.
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	n = n - 1;
	index = 0;
	while (index <= n)
	{
		tmp = a[index];
		a[index++] = a[n];
		a[n--] = tmp;
	}
}
