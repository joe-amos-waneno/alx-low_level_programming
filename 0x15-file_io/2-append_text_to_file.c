#include "main.h"
/**
 * append_text_to_file - Entry point
 * @filename: Pointer to the name of file.
 * @text_content: String to add to the end of file.
 * Return: 0 always
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, z = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (z = 0; text_content[z];)
			z++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, len);

	if (x == -1 || y == -1)
		return (-1);

	close(x);
	return (1);
}
