#include "lists.h"
/**
 *sum_listint - computes the sum of all the data of a listint_t linked list.
 *@head: pointer to the head node of the list.
 *
 *Return: the sum of all data, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
