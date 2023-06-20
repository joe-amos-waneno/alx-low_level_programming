#include "main.h"
/**
 * _isalpha - Entry point
 * @c: Character to check
 * Return: 1 if alphabetic or 0 else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return(1);
	}
	return (0);
}
