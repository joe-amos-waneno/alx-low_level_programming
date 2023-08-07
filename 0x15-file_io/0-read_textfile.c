#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *a;
	ssize_t b;
	ssize_t c;
	ssize_t d;

	b = open(filename, O_RDONLY);
	if (b == -1)
		return (0);
	a = malloc(sizeof(char) * letters);
	d = read(fd, buf, letters);
	c = write(STDOUT_FILENO, buf, t);

	free(a);
	close(b);
	return (c);
}

