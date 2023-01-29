#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: A pointer to the head of the list.
 * @str: String to be added to the data part of the node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;
	unsigned int len;

	new_node =(list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	len = strlen(new_str);

	new_node->str = new_str;
	new_node->len = len;
	new_node->next = NULL;
	
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while(*head)
		{
			if ((*head)->next == NULL)
			{
				(*head)->next = new_node;
				break;
			}
		*head = (*head)->next;
		}
	}
	return (*head);
}
