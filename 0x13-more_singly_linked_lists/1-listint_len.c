#include "lists.h"
/**
 * listint_len - returns number of elements in a list.
 * @h: Pointer to the headnode of the list.
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	while (h)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
