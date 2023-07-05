#include "main.h"
/**
 * _strlen_recursion - Entry point
 * @s: The string to be measured.
 * Return: length string.
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}

	return (x);
}
