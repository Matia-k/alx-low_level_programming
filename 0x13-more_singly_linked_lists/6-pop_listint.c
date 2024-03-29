#include "lists.h"
/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: pointer to the address of the head of the list.
 *
 * Return: the head node's data, or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *buf;
	int dat;

	if (*head == NULL)
		return (0);
	buf = *head;
	dat = (*head)->n;
	*head = (*head)->next;
	free(buf);

	return (dat);
}
