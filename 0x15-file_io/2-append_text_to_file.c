#include "main.h"
/**
 * append_text_to_file - Entry point
 * @filename: pointer
 * @text_content: string
 * Return: 0 always
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int led, gts, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	led = open(filename, O_WRONLY | O_APPEND);
	gts = write(led, text_content, len);

	if (led == -1 || gts == -1)
		return (-1);

	close(led);

	return (1);
}
