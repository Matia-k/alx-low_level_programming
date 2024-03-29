#include "lists.h"

/**
 * free_list - function that frees a list.
 * @head: Pointer to the first node of the list.
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
