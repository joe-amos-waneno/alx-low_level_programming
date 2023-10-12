#include "lists.h"

/**
 * sum_dlistint - Entry point
 * @head: header
 * Return: plus
 */
int sum_dlistint(dlistint_t *head)
{
	int plus;

	plus = 0;
	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}

		while (head != NULL)
		{
			plus += head->n;
			head = head->next;
		}
	}

	return (plus);
}
