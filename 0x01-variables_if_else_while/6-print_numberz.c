#include <stdio.h>

/**
 * main - Print single digit numbers base of 10
 *
 * Return: Success (0)
 *
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
