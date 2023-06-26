#include "main.h"
/**
 * print_rev - Entry point
 * @s: string
 * Return: 0 always
 */
void print_rev(char *s)
{
	int length = 0;
	int a;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (a = length; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
