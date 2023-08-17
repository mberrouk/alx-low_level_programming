#include "lists.h"

/**
 * get_dnodeint_at_index - get nth node of list
 * @head: head of list
 * @index: index of node
 *
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	if (index != i)
		return (0x00);
	return (head);
}
