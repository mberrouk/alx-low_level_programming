#include "lists.h"

/**
 * print_dlisint - prints all the elements of a dlistint_t list
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
