#include "main.h"
/**
 * _print_rev_recursion - Entry point
 * @s: String
 * Return: 0 always
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
