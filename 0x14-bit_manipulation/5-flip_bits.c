#include "main.h"
/**
 * flip_bits - Entry point
 * @n: first num
 * @m: second num
 * Return: 0 Always
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, counter = 0;
	unsigned long int current;
	unsigned long int exl = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		current = exl >> i;
		if (current & 1)
			counter++;
	}
	return (counter);
}
