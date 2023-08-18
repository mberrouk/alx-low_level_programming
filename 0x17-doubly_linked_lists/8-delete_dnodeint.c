#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head of list
 * @index: index
 *
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (!head || !tmp)
		return (-1);
	tmp = *head;
	if (!index)
	{
		*head = *head->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	while (index)
	{
		if (!tmp)
			return (-1);
		tmp = tmp->next;
		index--;
	}
	tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
