#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: Pointer to the beginning of the list
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t nods;

	nods = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nods++;
		h = h->next;
	}

	return (nods);
}
