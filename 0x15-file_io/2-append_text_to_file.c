#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: string to add to file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int result = 1, z = 0, y = 0, length = 0;

	if (filename == NULL)
	{
		result = -1;
		return (result);
	}

	z = open(filename, O_WRONLY | O_APPEND);
	if (z == -1)
	{
		result = -1;
		return (result);
	}

	if (text_content && z > 0)
	{

		while (text_content[y])
			y++;

		length = write(z, text_content, y);
		if (length != y)
			result = -1;
	}


	return (result);
}
