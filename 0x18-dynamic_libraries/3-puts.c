#include "main.h"
/**
 * _puts - Entry point
 * @str: String print
 * Return: 0 always
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
