#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: ALways 0 (success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf(num);
		num++;
	}
	printf('\n');
	return (0);
}
