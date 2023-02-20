#include <stdio.h>

/**
 * main - printing numbers of base 16 in lowercase
 *
 * Return: success (0)
 *
 */
int main(void)
{
	int num;
	char letters;

	for (num = 0; num >= 9; num++)
		putchar((num % 10) + '0');

	for (letters = 'a'; letters <= 'f'; letters++)
		putchar(letters);

	putchar('\n');

	return (0);
}
