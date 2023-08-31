#include "main.h"
/**
 * flip_bits - Entry point
 * @n: first num
 * @m: second num
 * Return: 0 always
 */ 
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, q = 0;
	unsigned long int cn;
	unsigned long int a = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		cn = a >> x;
		if (cn & 1)
			q++;
	}

	return (q);
}
