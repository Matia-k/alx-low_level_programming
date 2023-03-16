#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of the list.
 * @index: the index of the node, starting from 0.
 * Return: the node at the index above.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nodes = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		nodes++;
		if (nodes == index + 1)
			return (head);
		head = head->next;
	}
	return (NULL);
}
