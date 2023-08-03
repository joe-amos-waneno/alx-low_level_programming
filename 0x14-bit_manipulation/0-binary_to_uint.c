#include "main.h"
/**
 * binary_to_uint - Entry point
 * @b: string containing binary number
 * Return: 0 ALways
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int y = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		y = 2 * y + (b[x] - '0');
	}
	return (y);
}
