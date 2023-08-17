#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		if (head->prev)
			free(head->prev);
		if (head->next)
			head = head->next;
		else
		{
			free(head);
			return;
		}
	}
}
