#include "lists.h"

/**
 * add_nodeint - This program adds a node at the beginning of a linked list
 * @head: The pointer to the first node in the current list
 * @n: The data to insert in the new node
 * Return: The data to insert in that new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));
	if (!fresh)
		return (NULL);
	fresh->n = n;
	fresh->next = *head;
	*head = fresh;

	return (fresh);
}
