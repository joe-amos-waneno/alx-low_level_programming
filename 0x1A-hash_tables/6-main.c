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
	char *key;
	char *value;

	tab = hash_table_create(1024);
	hash_table_set(tab, "c", "fun");
	hash_table_set(tab, "python", "awesome");
	hash_table_set(tab, "Jennie", "and Jay love asm");
	hash_table_set(tab, "N", "queens");
	hash_table_set(tab, "Asterix", "Obelix");
	hash_table_set(tab, "Betty", "Holberton");
	hash_table_set(tab, "98", "Battery Streetz");
	key = strdup("Tim");
	value = strdup("Britton");
	hash_table_set(ht, key, value);
	key[0] = '\0';
	value[0] = '\0';
	free(key);
	free(value);
	hash_table_set(tab, "98", "Battery Street");
	hash_table_set(tab, "hetairas", "Jennie");
	hash_table_set(tab, "hetairas", "Jennie Z");
	hash_table_set(tab, "mentioner", "Jennie");
	hash_table_set(tab, "hetairas", "Jennie Z Chu");
	hash_table_print(tab);
	hash_table_delete(tab);
	return (EXIT_SUCCESS);
}
