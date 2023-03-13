#include "main.h"
#include <string.h>

/**
 * _memset - Function to change value of a block of memory
 * @*s: pointer to a memory that will be filled
 * @b: constant byte
 * @n: int data the number of bytes to fill
 *
 * Return: 0 Success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
