#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Entry point
 * @name: string to add
 * @f: pointer to function
 * Return: 0 always
 */
void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
