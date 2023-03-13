#include "main.h"

/**
 * _strncpy - Function that copies strings from source to destination
 * @dest: the destination array on which string will be copied
 * @src: the source array to copy the string
 * @n: integer variale size of destination
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int d = 0, s = 0;

	for (; s < n && src[s] != '\0'; s++)
		;
	for (; d < s && src[d] != '\0'; d++)
	{
		dest[d] = src[d];
	}
	for (; d < n; d++)
		dest[d] = '\0';
	return (dest);
}
