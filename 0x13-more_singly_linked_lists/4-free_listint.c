#include "lists.h"

/**
 * free_listint - This program frees a linked list
 * @head: The listint_t list is to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head);
		head = temporary;
	}
}
