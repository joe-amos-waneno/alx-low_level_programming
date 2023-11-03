#include "hash_tables.h"

/**
 * key_index - Entry point
 * @key: key
 * @size: size of array
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int q = 0;

	q = hash_djb2(key) % size;

	return (q);
}
