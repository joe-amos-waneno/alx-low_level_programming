#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet;

	char capital;

	alphabet = 'a';
	capital = 'A';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (capital <= 'Z')
	{
		putchar(capital);
		capital++;
	}
	putchar('\n');
	return (0);
}
