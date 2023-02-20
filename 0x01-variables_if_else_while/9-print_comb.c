#include <stdio.h>

/**
 * main - print digit using putchar with a comma followed by space
 *
 * Return: Success (0)
 *
 */
int main(void)
{
	int numb;

	for (numb = 0; numb <= 9; numb++)
	{
		putchar((numb % 10) + '0');
		if (numb == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
