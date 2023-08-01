#include "lists.h"
/**
 * get_nodeint_at_index - Entry point
 * @head: first node in linked list
 * @index: index of node to return
 * Return: 0 Always
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *y = head;

	while (y && x < index)
	{
		y = y->next;
		x++;
	}
	return (y ? y : NULL);
}
