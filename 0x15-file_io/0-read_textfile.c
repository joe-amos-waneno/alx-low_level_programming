#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Entry point
 * @filename: text file
 * @letters: number of letters
 * Return: 0 Awalys
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufferr;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bufferr = malloc(sizeof(char) * letters);
	t = read(fd, bufferr, letters);
	w = write(STDOUT_FILENO, bufferr, t);

	free(bufferr);
	close(fd);
	return (w);
}
