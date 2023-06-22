#include "main.h"

/**
 * print_most_numbers - checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		if (num != 50)
		{
			if (num != 52)
			{
				_putchar(num);
			}
		}
	}
	_putchar('\n');
}
