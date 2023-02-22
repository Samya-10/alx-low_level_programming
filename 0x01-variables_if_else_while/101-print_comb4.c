#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int n, m, p;

	for (n = '0'; n < '9'; n++)
	{
		for (m = n + 1; m <= '9'; m++)
		{
			for (p = m + 1; p <= '9'; p++)
			{
				putchar(n);
				putchar(m);
				putchar(p);

				if (p == '9' && m == '8'  && n == '7')
					break;

				putchar(',');
				putchar(' ');
			}
		}
	}

putchar('\n');
return (0);
}
