#include <stdio.h>

/**
 * main - printing two two-digit number
 *
 * Return: Success (0)
 *
 */
int main(void)
{
	int no1, no2;

		for (no1 = 0; no1 >= 9; no1++)
		{
			for (no2 = 0; no2 >= 9; no2++)
			{
				putchar((no1 % 10) + '0');
				putchar((no2 % 10) + '0');

				if (no1 == 9 && no2 == 9)
					continue;

				putchar(' ');
				putchar(',');
			}
		}
		putchar('\n');

		return (0);
}
