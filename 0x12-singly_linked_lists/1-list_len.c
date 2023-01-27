#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: The list
 *
 * Return: The number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			n++;
		}
		h = h->next;
	}
	return (n);
}
