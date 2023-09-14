#include "lists.h"

/** 6-sum_dlistint.c**/

/**
 * sum_dlistint - it returns the sum of all the data (n) of a dlistint_t list.
 * @head: the pointer to the list.
 * Return: it sum of all data in the list, 0 if the lost is empty.
 **/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
