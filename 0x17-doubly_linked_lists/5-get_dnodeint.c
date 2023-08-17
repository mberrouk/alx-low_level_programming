#include "lists.h"

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
