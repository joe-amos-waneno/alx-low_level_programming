#include "lists.h"

/**
 * dlistint_len - Entry point
 * @h: list header
 * Return: 0 always
 */
size_t dlistint_len(const dlistint_t *h)
{
	int q;

	q = 0;

	if (h == NULL)
		return (q);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		q++;
		h = h->next;
	}

	return (q);
}
