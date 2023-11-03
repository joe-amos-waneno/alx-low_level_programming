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
	hash_table_t *tab;

	tab = hash_table_create(1024);
	hash_table_print(tab);
	hash_table_set(tab, "c", "fun");
	hash_table_set(tab, "python", "awesome");
	hash_table_set(tab, "Jennie", "and Jay love asm");
	hash_table_set(tab, "N", "queens");
	hash_table_set(tab, "Asterix", "Obelix");
	hash_table_set(tab, "Betty", "Holberton");
	hash_table_set(tab, "98", "Battery Street");
	hash_table_print(tab);
	return (EXIT_SUCCESS);
}
