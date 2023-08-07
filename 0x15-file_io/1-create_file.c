#include "main.h"
/**
 * create_file - Entry point
 * @filename: pointer to the name of the file to create.
 * @text_content: pointer to a string to write to the file.
 * Return: 0 always
 */
int create_file(const char *filename, char *text_content)
{
	int x, y, z = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (z = 0; text_content[z];)
			z++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(fd, text_content, len);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
