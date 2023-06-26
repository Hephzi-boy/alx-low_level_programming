#include "main.h"

/**
 * swap_int - This takes in two variable integers and swaps them together
 * @a: This swaps and stores the addresses of b
 * @b: This swaps and stores the addresses of a
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
