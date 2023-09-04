#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void close_file(int fd);

char *create_buffer(char *file);
/**
 * create_buffer - Entry point
 * @file: File Name
 * Return: 0 always
 */
char *create_buffer(char *file)
{
	char *bffr;

	bffr = malloc(sizeof(char) * 1024);

	if (bffr == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (bffr);
}
/**
 * close_file - Entry level one
 * @fd: file descriptor to close
 */
void close_file(int fd)
{
	int gdp;

	gdp = close(fd);

	if (gdp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	
}

/**
 * main - main
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	
	char *bffr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bffr = create_buffer(argv[2]);
	
	from = open(argv[1], O_RDONLY);
	
	r = read(from, bffr, 1024);
	
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bffr);
			exit(98);
		}

		w = write(to, bffr, r);
		
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bffr);
			exit(99);
		}

		r = read(from, bffr, 1024);
		
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(bffr);
	
	close_file(from);
	
	close_file(to);

	return (0);
	
}
