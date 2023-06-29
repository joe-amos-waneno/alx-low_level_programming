#include "main.h"
/**
 * leet - Entry point
 * @n: input value
 * Return: n
 */
char *leet(char *n)
{
	int x, y;
	char z1[] = "aAeEoOtTlL";
	char z2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[x] == z1[y])
			{
				n[x] = z2[y];
			}
		}
	}
	return (n);
}

