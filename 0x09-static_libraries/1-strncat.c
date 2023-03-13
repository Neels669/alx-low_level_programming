#include "main.h"

/**
 * _strncat - Function that concatenates two strings
 * @dest: Pointer to first string
 * @src: Pointer to second string
 * @n: datatype integer variable
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;

	for (b = 0; src[b] != '\0' && n > 0; b++, n--, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
