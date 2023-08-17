#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head of list
 * @n: int
 *
 * Return: the new node pointer or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;

	if (!head)
		return (0X00);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0x00);
	new->n = n;
	new->next = 0x00;
	tmp = *head;
	while (tmp && tmp->next)
		tmp = tmp->next;
	new->prev = tmp;
	if (!tmp)
		*head = new;
	else
		tmp->next = new;
	return (new);
}
