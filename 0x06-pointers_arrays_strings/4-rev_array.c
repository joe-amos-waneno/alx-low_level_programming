#include "main.h"
/**
 * reverse_array - Entry point
 * @a: array
 * @n: Elements
 * Return: 0 always
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
