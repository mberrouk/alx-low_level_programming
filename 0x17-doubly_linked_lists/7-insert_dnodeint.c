#include "lists.h"

/**
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new;
	unsigned int i;

	if (!h)
		return (0x00);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0x00);
	new->n = n;
	tmp = *h;
	i = 0;
	while (tmp && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (i != idx - 1)
		return (0x00);
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;
	return (new);
}
