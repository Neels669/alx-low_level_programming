#include "main.h"

/**
 * _puts - Function that prints a string
 * @str: data type char to print string
 *
 * Return: viod
 *
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
