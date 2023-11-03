#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tab = NULL;
	unsigned long int q = 0;

	tab = malloc(sizeof(hash_table_t));
	if (tab == NULL)
		return (NULL);

	tab->array = malloc(sizeof(hash_node_t *) * size);
	if (tab->array == NULL)
		return (NULL);

	tab->size = size;
	while (q < size)
	{
		tab->array[q] = NULL;
		q++;
	}

	return (tab);
}
