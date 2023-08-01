#include "lists.h"
/**
 * reverse_listint - Entry point
 * @head: pointer to first node
 * Return: 0 ALways
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = preiousv;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
