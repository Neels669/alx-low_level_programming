#include <stdio.h>

/**
 * main - Printing the alphabet
 *
 * Return: Success (0)
 *
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);

	putchar('\n');

	return (0);
}
