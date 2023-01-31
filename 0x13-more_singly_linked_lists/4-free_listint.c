#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to the beginning of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *buf;
	/**
	 * iterate through the list.
	 * First keep track of address of next node(in a buffer pointer)
	 * Then free current node pointer.
	 * continue until end of list.
	 */
	while (head)
	{
		buf = head->next;
		free(head);
		head = buf;
	}
}
