#include "main.h"
/**
 * create_file - Entry
 * @filename: pointer
 * @text_content: pointer to string
 * Return: 0 always
 */
int create_file(const char *filename, char *text_content)
{
	int rs, vw, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	rs = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	vw = write(rs, text_content, len);

	if (rs == -1 || vw == -1)
		return (-1);

	close(rs);

	return (1);
}
