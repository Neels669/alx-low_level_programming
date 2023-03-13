#include "main.h"

/**
 * _strcat - Function that will concentrate two strings
 * @dest: pointer to the first string
 * @src: pointer to the second string
 *
 * Return: pointer to the resulting string (dest)
 */
char *_strcat(char *dest, char *src)
{
	int first, second;

	for (first = 0; dest[first] != '\0'; first++)
		;

	for (second = 0; second[src] != '\0'; second++)
	{
		dest[first] = src[second];
		first++;
	}

	dest[first] = '\0';
	return (dest);
}
