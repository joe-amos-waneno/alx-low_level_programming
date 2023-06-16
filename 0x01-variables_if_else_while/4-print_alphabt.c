#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		if (alphabet == 'q' || alphabet == 'e')
		{
			alphabet += 1;
		}
		else
		{
			putchar(alphabet);
			alphabet++;
		}
	}
	putchar('\n');
	return (0);
}
