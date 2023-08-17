#include "lists.h"

/**
 * add_dnodeint - dds a new node at the beginning of a dlistint_t list.
 * @head: double ptr to head of list
 * @n: arg
 *
 * Return: the new head or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (0x00);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0x00);
	new->n = n;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (*head);
}
