#include "main.h"
/**
 * get_bit - Entry point
 * @n: number to be searched
 * @index: index
 * Return: 0 always
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int l;

	if (index > 63)
		return (-1);

	l = (n >> index) & 1;

	return (l);
}
