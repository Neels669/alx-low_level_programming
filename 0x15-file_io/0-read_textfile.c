#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - fuction that read a text file and print it out the POSIX std
 * out
 * @filename: body of text to print.
 * @letters: max char to print.
 * Return: number of chars printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t length = 0, final_length = 0;
	int y = 0;
	char *buff = NULL;


	if (filename == NULL)
		return (length);

	y = open(filename, O_RDWR | O_CREAT);
	if (y < 0)
		return (length);

	buff = malloc(sizeof(*buff) * letters);
	if (buff == NULL)
		return (length);
	length = read(y, buff, letters);
	final_length = write(STDOUT_FILENO, buff, length);
	if (final_length != length)
		length = 0;
	close(y);
	free(buff);
	return (length);
}
