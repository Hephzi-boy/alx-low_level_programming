#include <stdio.h>
#include "lists.h"

/**
 * print_list - This program prints all the elements of a linked list
 * @h: The pointer to the list_t list to be printed
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}
	return (nodes);
}
