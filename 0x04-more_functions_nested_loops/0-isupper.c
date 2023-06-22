#include "main.h"
/**
 * _isupper - Entry point
 * @c: variable
 * Return: 1 if is upper else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
