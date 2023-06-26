#include "main.h"
/**
 * puts_half - Entry point
 * @str: input
 * Return: 0 always
 */
void puts_half(char *str)
{
	int x, y, length;

	length = 0;
	for (x  = 0; str[x] != '\0'; x++)
	{
		length++;
	}

	y = (length / 2);
	if ((length % 2) == 1)
	{
		y = ((length + 1) / 2);
	}
	for (x = y; str[x]  != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
