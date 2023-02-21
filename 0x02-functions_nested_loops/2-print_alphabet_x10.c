#include "main.h"

/**
 * print_alphabet_x10 - print alphabets x10
 *
 * Return: void
 *
 */
void print_alphabet_x10(void)
{
	char z;
	int times = 0;

	while (times <= 9)
	{
		for (z = 'a'; z <= 'z'; z++)
		{
			_putchar(z);
		}

		_putchar('\n');

		times++;
	}
}
