#include "main.h"
/**
 * print_sign - entry point
 * @n: charater to be checked
 * Return: 1 if n is greater than zero else 0 if is zero else -1 if less
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
