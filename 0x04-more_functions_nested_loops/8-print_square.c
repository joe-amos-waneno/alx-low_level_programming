#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 * Return: Always 0
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int num, num1;

		for (num = 0; num < size; num++)
		{
			for (num1 = 0; num1 < size; num1++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
