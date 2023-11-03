#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - ENTRY
 * Return: EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *tab;

	tab = hash_table_create(1024);
	hash_table_set(tab, "betty", "holberton");
	return (EXIT_SUCCESS);
}
