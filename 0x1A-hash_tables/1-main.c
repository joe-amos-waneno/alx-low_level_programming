#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - MAIN
 * Return: EXIT_SUCCESS
 */
int main(void)
{
        char *wq;

        wq = "cisfun";
        printf("%lu\n", hash_djb2((unsigned char *)wq));
        wq = "Don't forget to tweet today";
        printf("%lu\n", hash_djb2((unsigned char *)wq));
        wq = "98";
        printf("%lu\n", hash_djb2((unsigned char *)wq));
        return (EXIT_SUCCESS);
}
