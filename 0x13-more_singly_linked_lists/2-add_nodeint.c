#include "lists.h"
/**
 * add_nodeint - Entry point
 * @head: pointer to first node
 * @n: Data to be inserted
 * Return: 0 ALways
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;
	
	x = malloc(sizeof(listint_t));
	if (!x)
		return (NULL);

	x->n = n;
	x->next = *head;
	*head = x;
	return (x);
}
