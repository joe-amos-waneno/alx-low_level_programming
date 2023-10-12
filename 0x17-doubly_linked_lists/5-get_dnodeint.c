#include "lists.h"

/**
 * get_dnodeint_at_index - Entry point
 * @head: header
 * @index: nth node index
 * Return: 0 always
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int q;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head->prev != NULL)
	{
		head = head->prev;
	}

	q = 0;

	while (head != NULL)
	{
		if (q == index)
		{
			break;
		}
		head = head->next;
		q++;
	}
	return (head);
}
