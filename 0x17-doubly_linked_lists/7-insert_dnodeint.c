#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a list
 * @h: head of list
 * @idx: index
 * @n: arg
 *
 * Return: new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new;
	unsigned int i;

	if (!h)
		return (0x00);
	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp = *h;
	i = 0;
	while (tmp && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (!tmp)
		return (0x00);
	if (!tmp->next)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0x00);
	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;
	return (new);
}
