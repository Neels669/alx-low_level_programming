#include "main.h"

/**
 * _strlen - Function to return the length of string
 * @s: character string to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int str = 0;

	for (; *s != '\0'; s++)
	{
		str++;
	}

	return (str);
}
