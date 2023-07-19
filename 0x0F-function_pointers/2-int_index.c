#include "function_pointers.h"
/**
 * int_index - Entry point
 * @array: array
 * @size: size of array
 * @cmp: pointer to function
 * Return: 0 always
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (X);
	}
	return (-1);
}
