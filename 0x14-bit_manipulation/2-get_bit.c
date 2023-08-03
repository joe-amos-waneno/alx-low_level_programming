#include "main.h"
/**
 * get_bit - Entry point
 * @n: number to search
 * @index: index of bit
 * Return: 0 Always
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > 63)
		return (-1);
	x = (n >> index) & 1;
	return (x);
}
