#include "main.h"

/**
 * main print_alphabet_x10(void) - print alphabets
 *
 * Return: void
 *
 */
void print_alphabet_x10(void)
{
	char z;
	int times = 10;

	while (times <= 10)
	{
		for (z = 'a'; z <= 'z'; z++)
		{
			_putchar(z);
		}

		_putchar('\n');

		times++;
	}
}
