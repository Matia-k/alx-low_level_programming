#include "lists.h"

/**
 * free_list - function that frees a list.
 * @head: Pointer to the first node of the list.
 */
void free_list(list_t *head)
{
	list_t *current;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			current = head->next;
			head = head->next;
			free(current);
		}
	}
}
