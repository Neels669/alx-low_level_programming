#include "main.h"

/**
 * rev_string - Function that reverses a string
 * @s: Data type character that checks string to be rev
 *
 * Return: Void
 *
 */
void rev_string(char *s)
{
	char a = s[0];
	int one = 0;
	int two;

	while (s[one] != '\0')
		one++;
	for (two = 0; two < one; two++)
	{
		one--;
		a = s[two];
		s[two] = s[one];
		s[one] = a;
	}
}
