#include "lists.h"
/**
 * listint_len - Entry point
 * @h: linked list
 * Return: 0 ALways
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
