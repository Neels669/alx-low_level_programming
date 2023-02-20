#include <stdio.h>

/**
 * main - assign character of letters to print in reverse
 *
 * Return: Success (0)
 *
 */
int main(void)
{
	char let_rv;

	for (let_rv = 'z'; let_rv >= 'a'; let_rv--)
		putchar(let_rv);

	putchar('\n');

	return (0);
}
