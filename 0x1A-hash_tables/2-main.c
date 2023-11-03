#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - ENTRY
 * Return: EXIT_SUCCESS
 */
int main(void)
{
        char *wq;
        unsigned long int tab;

        tab = 1024;
        wq = "cisfun";
        printf("%lu\n", hash_djb2((unsigned char *)wq));
        printf("%lu\n", key_index((unsigned char *)wq,tab));
        wq = "Don't forget to tweet today";
        printf("%lu\n", hash_djb2((unsigned char *)wq));
        printf("%lu\n", key_index((unsigned char *)wq, tab));
        wq = "98";
        printf("%lu\n", hash_djb2((unsigned char *)wq));
        printf("%lu\n", key_index((unsigned char *)wq, tab));
        return (EXIT_SUCCESS);
}
