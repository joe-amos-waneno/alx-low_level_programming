#include "lists.h"

/**
 * print_dlistint - Entry point
 * Return: 0 always
 */
size_t print_dlistint(const dlistint_t *h)
{
	int q;

	q = 0;

	if (h == NULL)
		return (q);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		q++;
		h = h->next;
	}

	return (q);
}
