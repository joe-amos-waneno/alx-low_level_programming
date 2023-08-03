#include "main.h"
/**
 * get_endianness - Entry point
 * Return: 0 Always
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *y = (char *) &x;

	return (*y);
}
