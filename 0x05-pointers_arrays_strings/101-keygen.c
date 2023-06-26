#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0 Always
 */
int main(void)
{
	int password[100];
	int x, y, z;

	y = 0;

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		password[x] = rand() % 78;
		y += (password[x] + '0');
		putchar(password[x] + '0');
		if ((2772 - y) - '0' < 78)
		{
			z = 2772 - y - '0';
			y += z;
			putchar(z + '0');
			break;
		}
	}
	return (0);
}
