#include "lists.h"

/**
 * print_listint - This program prints all the elements of a linked list
 * @h: The linked list of type listint_t to print
 * Return: The number of nodes present
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);
}