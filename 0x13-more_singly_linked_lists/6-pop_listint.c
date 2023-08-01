#include "lists.h"
/**
 * pop_listint - Entry point
 * @head: pointer to first element in linked list
 * Return: 0 Always
 */
int pop_listint(listint_t **head)
{
	listint_t *x;
	int y;

	if (!head || !*head)
		return (0);

	y = (*head)->n;
	x = (*head)->next;
	free(*head);
	*head = x;
	return (y);
}
