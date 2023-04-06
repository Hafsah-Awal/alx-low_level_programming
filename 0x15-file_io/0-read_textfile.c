/*
 * File: 0-read_textfile.c
 * Auth: Hafsat
 */
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - It reads a text file and prints it to POSIX stdout.
 * @filename: text file being read
 * @letters: The total number of letters the
 *           function should be able to read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	x = open(filename, O_RDONLY);
	y = read(x, buffer, letters);
	z = write(STDOUT_FILENO, buffer, y);

	if (x == -1 || y == -1 || z == -1 || z != y)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(x);

	return (z);
}
