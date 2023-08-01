#include "lists.h"
/**
 * delete_nodeint_at_index - Entry point
 * @head: pointer to first element in list
 * @index: index of node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *x = *head;
	listint_t *y = NULL;
	unsigned int z = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(x);
		return (1);
	}
	while (z < index - 1)
	{
		if (!x || !(x->next))
			return (-1);
		x = x->next;
		z++;
	}
	y = x->next;
	x->next = y->next;
	free(y);
	return (1);
}
