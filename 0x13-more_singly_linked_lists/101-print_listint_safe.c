#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - Entry point
 * @head: Pointer to the head
 * Return: 0 Always
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tortoise = head->next;
	hare = (head->next)->next;
	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				node++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				node++;
				tortoise = tortoise->next;
			}
			return (node);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - Entry point two
 * @head: Pointer to head
 * Return: 0 ALways
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, inx = 0;

	node = looped_listint_len(head);
	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (inx = 0; inx < node; inx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
