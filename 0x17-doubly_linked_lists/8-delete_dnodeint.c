#include "lists.h"

/**
 * delete_dnodeint_at_index - Entry point
 * @head: header
 * @index: index
 * Return: 0 always
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *v1;
	dlistint_t *v2;
	unsigned int q;

	v1 = *head;

	if (v1 != NULL)
	{
		while (v1->prev != NULL)
		{
			v1 = v1->prev;
		}
	}

	q = 0;

	while (v1 != NULL)
	{
		if (q == index)
		{
			if (q == 0)
			{
				*head = v1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				v2->next = v1->next;

				if (v1->next != NULL)
				{
					v1->next->prev = v2;
				}
			}
			free(v1);
			return (1);
		}
		v2 = v1;
		v1 = v1->next;
		q++;
	}
	return (-1);
}
