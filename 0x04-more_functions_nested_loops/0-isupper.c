#include "main.h"

/**
 * _isupper - checks uppercase
 * @c: Defined integer to be checked
 *
 * Return: (1) is successful and (0) otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

