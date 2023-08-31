#include "main.h"
/**
 * get_endianness - Entry
 * Return: 0 always
 */
int get_endianness(void)
{
	unsigned int s = 1;
	char *d = (char *) &s;

	return (*d);
}
