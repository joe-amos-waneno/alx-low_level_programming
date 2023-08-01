#include "lists.h"
/**
 * insert_nodeint_at_index - Entry point
 * @head: pointer to the first
 * @idx: index where the new node is added
 * @n: data to insert
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *y;
	listint_t *z = *head;

	y = malloc(sizeof(listint_t));
	if (!y || !head)
		return (NULL);

	y->n = n;
	y->next = NULL;

	if (idx == 0)
	{
		y->next = *head;
		*head = y;
		return (y);
	}

	for (x = 0; z && x < idx; x++)
	{
		if (x == idx - 1)
		{
			y->next = z->next;
			z->next = y;
			return (y);
		}
		else
			z = z->next;
	}
	return (NULL);
}
