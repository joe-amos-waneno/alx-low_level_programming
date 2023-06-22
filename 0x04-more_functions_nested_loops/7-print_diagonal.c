#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int num, num1;

		for (num = 0; num < n; num++)
		{
			for (num1 = 0; num1 < n; num1++)
			{
				if (num1 == num)
					_putchar('\\');
				else if (num1 < num)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
