#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the pointer to the first node of the list
 * @n: varible to be stored at the data element of the new node.
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	temp = *head;
	new  = malloc(sizeof(dlistint_t *));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	new->next = temp;
	if (temp != NULL)
		temp->prev = new;
	temp = new;

	return (new);
}
