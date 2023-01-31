#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to the beginning of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *buf;

	if (*head == NULL)
		return;
	/**
	 * iterate through the list.
	 * First keep track of address of next node(in a buffer pointer)
	 * Then free current node pointer.
	 * continue until end of list.
	 */
	while (*head)
	{
		buf = (*head)->next;
		free(*head);
		*head = buf;
	}
	head = NULL;
}
