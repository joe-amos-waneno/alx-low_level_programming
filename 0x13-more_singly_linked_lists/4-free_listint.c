#include "lists.h"
/**
 * free_listint - Entry point
 * @head: list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *x;

	while (head)
	{
		x = head->next;
		free(head);
		head = x;
	}
}
