#include "main.h"
/**
 * _strncpy - Entry point
 * @dest: input
 * @src: input
 * @n: input
 * Return: 0 always
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
