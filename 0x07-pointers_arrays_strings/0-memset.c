#include "main.h"
/**
 * _memset - Entry point
 * @s: starting address
 * @b: desired value
 * @n: bytes to be changed
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
