#include "main.h"
/**
 * flip_bits - Entry point
 * @m: second number
 * @n: first number
 * Return: 0 always
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, z = 0;
	unsigned long int cr;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cr = ex >> i;
		if (cr & 1)
			z++;
	}
	return (z);
}
