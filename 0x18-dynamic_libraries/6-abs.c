#include "main.h"
/**
 * _abs - Entry point
 * @num: Computing Int
 * Return: Absolute value or zero
 */
int _abs(int num)
{
	if (num < 0)
	{
		int value;

		value = num * -1;
		return (value);
	}
	return (num);
}
