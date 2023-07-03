#include "main.h"
/**
 *_memcpy - Entry point
 *@dest: memory storage
 *@src: copied memory
 *@n: bytes
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
