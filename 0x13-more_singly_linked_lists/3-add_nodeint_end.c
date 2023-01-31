#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: a pointer to the beginning of a list.
 * @n: int to be stored at the data-element part of the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new_node;

	temp = *head;
	new_node = (listint_t *)malloc(sizeof(listint_t *));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp)
		{
			if (temp->next == NULL)
			{
				temp->next = new_node;
				break;
			}
			temp = temp->next;
		}
	}
	return (new_node);
}
