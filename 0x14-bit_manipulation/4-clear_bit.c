#include "main.h"
/**
 * clear_bit - Entry point
 * @n: pointer to number to change
 * @index: index of bit to clear
 * Return: 0 ALways
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
