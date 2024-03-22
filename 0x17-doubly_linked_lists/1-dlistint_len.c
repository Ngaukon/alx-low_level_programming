#include "lists.h"

/**
 * dlistint_len - Counts the number of the elements in a linked dlistint_t list.
 * @h: The head of the dlistint_t lists.
 *
 * Return: The number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
