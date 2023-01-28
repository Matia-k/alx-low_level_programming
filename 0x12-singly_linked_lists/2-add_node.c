#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Adds a new node at the beginning of a list.
 * @head: A pointer to the head of the list
 * @str: The string to add to the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_string;
	unsigned int len;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_string = strdup(str);
	if (new_string == NULL)
	{
		free(new_string);
		return (NULL);
	}

	len = strlen(new_string);

	new_node->str = new_string;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;
	return (*head);
}
