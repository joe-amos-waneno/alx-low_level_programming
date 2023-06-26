#include "main.h"
/**
 * swap_int - Entry point
 * @a: Int to swap
 * @b: Int to swap
 * Return: 0 always
 */
void swap_int(int *a, int *b)
{
	int x;
	
	x = *a;
	*a = *b;
	*b = x;
}
