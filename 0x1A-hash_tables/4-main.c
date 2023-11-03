#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - MAIN.
 *
 * Return: EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *tab;
	char *wq;

	tab = hash_table_create(1024);
	hash_table_set(tab, "c", "fun");
	hash_table_set(tab, "python", "awesome");
	hash_table_set(tab, "Jennie", "and Jay love asm");
	hash_table_set(tab, "N", "queens");
	hash_table_set(tab, "Asterix", "Obelix");
	hash_table_set(tab, "Betty", "Holberton");
	hash_table_set(tab, "98", "Battery Street");
	hash_table_set(tab, "c", "isfun");

	wq = hash_table_get(tab, "python");
	printf("%s:%s\n", "python", wq);
	wq = hash_table_get(tab, "Jennie");
	printf("%s:%s\n", "Jennie", wq);
	wq = hash_table_get(tab, "N");
	printf("%s:%s\n", "N", wq);
	wq = hash_table_get(tab, "Asterix");
	printf("%s:%s\n", "Asterix", wq);
	wq = hash_table_get(tab, "Betty");
	printf("%s:%s\n", "Betty", wq);
	wq = hash_table_get(tab, "98");
	printf("%s:%s\n", "98", wq);
	wq = hash_table_get(tab, "c");
	printf("%s:%s\n", "c", wq);
	wq = hash_table_get(tab, "javascript");
	printf("%s:%s\n", "javascript", wq);
	return (EXIT_SUCCESS);
}
