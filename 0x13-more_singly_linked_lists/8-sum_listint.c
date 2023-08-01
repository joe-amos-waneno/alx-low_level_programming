#include "lists.h"
/**
 * sum_listint - Entry point
 * @head: first node
 * Return: 0 Always
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *x = head;

	while (x)
	{
		sum += x->n;
		x = x->next;
	}
	return (sum);
}
