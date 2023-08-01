#include "lists.h"
/**
 * free_listint_safe - Entry point
 * @h: pointer to the first node
 * Return: 0 Always
 */
size_t free_listint_safe(listint_t **h)
{
	size_t x = 0;
	int z;
	listint_t *y;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		z = *h - (*h)->next;
		if (z > 0)
		{
			y = (*h)->next;
			free(*h);
			*h = y;
			x++;
		}
		else
		{
			free(*h);
			*h = NULL;
			x++;
			break;
		}
	}
	*h = NULL;
	return (x);
}
