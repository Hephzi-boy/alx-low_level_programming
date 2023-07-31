#include "lists.h"

/**
 * listint_len - This program returns the total number of elements linked lists
 * @h: The linked list of type listint_t to input
 * Return: The total number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
