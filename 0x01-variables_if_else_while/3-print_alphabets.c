#include <stdio.h>

/**
 * main - print the alphabet in lower case than upper case
 *
 * Return: Success(0)
 *
 */

int main(void)
{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);

	putchar('\n');

	return (0);
}
