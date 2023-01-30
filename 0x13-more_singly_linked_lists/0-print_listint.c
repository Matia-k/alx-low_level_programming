#include "lists.h"
/**
 * print_listint - prints all elements of a list
 * @h: Pointer to the headnode of the list.
 *
 * Retun: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
