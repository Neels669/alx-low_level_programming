#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdo
 * @filename: name of the file that we will open
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters that we could read and print, 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, letters);

	w = write(STDOUT_FILENO, text, let);

	close(file);

	return (w);
}
