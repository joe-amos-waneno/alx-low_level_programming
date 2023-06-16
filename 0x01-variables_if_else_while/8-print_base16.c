#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int num;

	char alphabet;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (alphabet = 'a'; alphabet < 'g'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
