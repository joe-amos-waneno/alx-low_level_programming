#include "main.h"
/**
 * _islower - Entry point
 * @c: Checking charater
 * Return: 1 if lowercase charater or 0 for other
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
