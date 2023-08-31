#include "main.h"
/**
 * print_binary - Entry point
 * @n: number
 * Return: 0 always
 */
void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int b;

	for (i = 63; i >= 0; i--)
	{
		b = n >> i;

		if (b & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}

	if (!j)
		_putchar('0');
}
