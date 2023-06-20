#include "main.h"
/**
 * print_last_digit - Entry point
 * @num: Digit to check
 * Return: Last digit
 */
int print_last_digit(int num)
{
	int digit;

	digit = num % 10;
	if (digit < 0)
	{
		digit = digit * -1;
	}
	_putchar(digit + '0');
	return (digit);
}
