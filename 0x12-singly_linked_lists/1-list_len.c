#include "lists.h"
#include <stdlib.h>

/**
 * list_len - This program returns the number of the elements in a linked list
 * @h: The pointer to the list_t list to be printed
 * Return: The number of elements present in h
 */

size_t list_len(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		p++;
		h = h->next;
	}
	return (p);
}
