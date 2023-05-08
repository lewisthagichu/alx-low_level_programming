/*
 * File: 0-read_textfile.c
 * Auth: Thagichu
 * Desc: Reads a text file and prints it to POSIX stdout
 */

#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: Pointer to the name of the file
 * @letters: The number of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 * Otherwise, the actual number of
 * bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b, c;
	char *buffers;

	if (filename == NULL)
		return (0);

	buffers = malloc(sizeof(char) * letters);
	if (buffers == NULL)
		return (0);

	a = open(filename, O_RDONLY);
	b = read(a, buffers, letters);
	c = write(STDOUT_FILENO, buffers, b);

	if (a == -1 || b == -1 || c == -1 || c != b)
	{
		free(buffers);
		return (0);
	}

	free(buffers);
	close(a);

	return (c);
}
