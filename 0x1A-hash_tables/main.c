#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - main Entry check
 * Return: EXIT_SUCCESS.
 */
int main(void)
{
        hash_table_t *tab;

        tab = hash_table_create(1024);
        printf("%p\n", (void *)tab);
        return (EXIT_SUCCESS);
}
