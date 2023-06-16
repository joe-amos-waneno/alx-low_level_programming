#include <stdio.h>
#include <atype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet >= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);

}
