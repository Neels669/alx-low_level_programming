#include "main.h"

/**
 * puts_half - function should print the second half of the string
 * @str: Data type char to check the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int one, two, length;

	length = 0;
	for (one = 0; str[one] != '\0'; one++)
	length++;
	two = ((length + 1) / 2);
	if ((length % 2) == 1)
	{
		two = ((length + 1) / 2);
		for (one = two; str[one] != '\0'; one++)
		_putchar(str[one]);
	}
	_putchar('\n');
}
