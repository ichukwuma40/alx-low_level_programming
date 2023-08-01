#include <stdio.h>
#include "lists.h"

size_t print_listint_safe(const listint_t *head);
size_t looped_listint_len(const listint_t *head);

/**
 * looped_listint_len - This Count the number of unique nodes in the list
 * inside a loop listint_t of a linked list.
 * @head: This is a pointer to the head of the listint_t to be checked on the node.
 *
 * Return: It returns - 0 if the list is not looped.
 *         Otherwise - The no of the unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	size_t nodes = 1;
	const listint_t *obi, *ada;

	if (head == NULL || head->next == NULL)
		return (0);

	ada = (head->next)->next;
	obi = head->next;

	while (ada)
	{
		if (obi == ada)
		{
			obi = head;
			while (obi != ada)
			{
				nodes++;
				obi = obi->next;
				ada = ada->next;
			}

			obi = obi->next;
			while (obi != ada)
			{
				nodes++;
				obi = obi->next;
			}

			return (nodes);
		}

		obi = obi->next;
		ada = (ada->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - The print a listint_t list safely.
 * @head: This the pointer to the head of the listint_t list.
 *
 * Return: This is the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
