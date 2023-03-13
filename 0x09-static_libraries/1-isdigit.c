#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: variable for this function
 *
 * Return: if success (0) otherwise (1)
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
