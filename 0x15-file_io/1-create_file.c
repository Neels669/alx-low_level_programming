#include "main.h"

/**
 * create_file - creates a file
 * @filename: parameter 1
 * @text_content: parameter 2
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int result = 1, y = 0, z = 0, length = 0;

	if (filename == NULL)
	{
		result = -1;
		return (result);
	}

	y = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (y == -1)
	{
		result = -1;
		return (result);
	}

	if (text_content)
	{

		while (text_content[z])
			z++;

		length = write(y, text_content, z);
		if (length != z)
			result = -1;
	}
	close(y);
	return (result);
}
