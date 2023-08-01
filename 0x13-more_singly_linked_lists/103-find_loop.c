#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *find_common_node - finds a common node in a looped linked list
 *@run:faster incrementing pointer
 *@walk:slower pointer
 *Return:address to common node,NULL otherwise
 */
listint_t *find_common_node(listint_t *run, listint_t *walk)
{
	while (run && walk && walk->next)
	{
		run = run->next->next;
		walk = walk->next;
		if (run == walk)
			return (walk);
	}
	return (NULL);
}
/**
 *find_listint_loop - finds an occurrence of  loop in a list and returns
 *head node
 *@head:pointer to listint node
 *Return:pointer to head if true,NULL otherwise
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *run = head, *walk = head;

	walk = find_common_node(run, walk);
	if (walk == NULL)
		return (NULL);
	run = head;
	while (run != walk)
	{
		run = run->next;
		walk = walk->next;
	}
	return (run);
}
