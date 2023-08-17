#include "lists.h"

/**
 * sum_dlistint - sum off all the data of a list
 * @head: head of list
 *
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
	}
	return (sum);
}
