#include "hash_tables.h"

/**
 * shash_table_create - ENTRY
 * @size: size
 * Return: 0 ALWAYS
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int index;

	new_table = (shash_table_t *) malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;
	new_table->array = (shash_node_t **) malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (index = 0; index < size; index++)
		(new_table->array)[index] = NULL;
	return (new_table);

}

/**
 * shash_table_set - ENTRY
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 0 ALWAYS
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
}
/**
 * shash_table_get - ENTRY
 * @ht: hash table
 * @key: key
 * Return: 0 always
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{

}

/**
 * shash_table_print - ENTRY
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{

}

/**
 * shash_table_print_rev - ENTRY
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{

}

/**
 * shash_table_delete - ENTRY
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{

}
