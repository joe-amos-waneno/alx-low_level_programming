#include "main.h"
/**
 * puts2 - Entry point
 * @str: input
 * Return: print
 */
void puts2(chae *str)
{
	int length = 0;
	int x = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	x = length - 1;
	for (z = 0; z <= x; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
