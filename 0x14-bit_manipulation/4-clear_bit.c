#include "main.h"
/**
 * clear_bit - Entry level
 * @n: pointer
 * @index: index
 * Return: 0 always
 */
 
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
