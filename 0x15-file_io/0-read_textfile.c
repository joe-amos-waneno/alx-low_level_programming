#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Entry point
 * @filename: text
 * @letters: number of letters
 * Return: 0 always
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t w;
	ssize_t t;
	
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	
	t = read(fd, buffer, letters);
	
	w = write(STDOUT_FILENO, buffer, t);
	
	free(buffer);
	
	close(fd);
	return (w);
}
