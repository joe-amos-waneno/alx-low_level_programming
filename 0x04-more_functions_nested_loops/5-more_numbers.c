#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int num, num2;

	for (num = 0; num < 10; num++)
	{
		for (num2 = 0; num2 < 15; num2++)
		{
			if (num2 >= 10)
			{
				_putchar(num2 / 10 + '0');
			}
			_putchar(num2 % 10 + '0');
		}
		_putchar('\n');
	}
}
