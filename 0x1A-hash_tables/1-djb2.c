#include "hash_tables.h"

/**
 * hash_djb2 - Entry Point
 * @str: pointer
 * Return: tab
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int tab = 5381;
	int q;

	while ((q = *str++))
	{
		tab = ((tab << 5) + tab) + q;
	}
	return (tab);
}
