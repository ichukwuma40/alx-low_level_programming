#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - It reverse a listint_t linked list
 * @head: double pointer to first head of the listint_t linked list
 * Return: It returns a pointer to the first node of the reversed new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node, *what_to_point_to;

	if (!(*head))
		return (NULL);

	next_node = (*head)->next;
	what_to_point_to = NULL;
	what_to_point_to = *head;
	(*head)->next = what_to_point_to;

	while (next_node)
	{
		 next_node = (*head)->next;
		*head = next_node;
		what_to_point_to = *head;
		(*head)->next = what_to_point_to;
	}

	return (*head);

}
