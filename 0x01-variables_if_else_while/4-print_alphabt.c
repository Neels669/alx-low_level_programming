#include <stdio.h>

/**
 * main - Printing letters except q and e
 *
 * Return: Success (0)
 *
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters != 'e' && letters != 'q')
		putchar(letters);
	}

	putchar('\n');

	return (0);
}
