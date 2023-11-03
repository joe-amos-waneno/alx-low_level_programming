#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - MAIN
 *
 * Return: EXIT_SUCCESS.
 */
int main(void)
{
	shash_table_t *tab;

	tab = shash_table_create(1024);
	shash_table_set(tab, "y", "0");
	shash_table_print(tab);
	shash_table_set(tab, "j", "1");
	shash_table_print(tab);
	shash_table_set(tab, "c", "2");
	shash_table_print(tab);
	shash_table_set(tab, "b", "3");
	shash_table_print(tab);
	shash_table_set(tab, "z", "4");
	shash_table_print(tab);
	shash_table_set(tab, "n", "5");
	shash_table_print(tab);
	shash_table_set(tab, "a", "6");
	shash_table_print(tab);
	shash_table_set(tab, "m", "7");
	shash_table_print(tab);
	shash_table_print_rev(tab);
	shash_table_delete(tab);
	return (EXIT_SUCCESS);
}
