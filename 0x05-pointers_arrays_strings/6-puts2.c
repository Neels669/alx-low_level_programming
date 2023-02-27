#include "main.h"

/**
 * puts2 - Function that prints characters in a sequence of
 * skipping the next and printing the one after
 * @str: data type char that will be checked to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int one = 0;

	for (; str[one] != '\0'; one++)
	{
		if ((one % 2) == 0)
			_putchar(str[one]);
		else
			continue;
	}
	_putchar('\n');
}
