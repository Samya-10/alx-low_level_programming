#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int n, m;

	for (n = '0'; n < '9'; n++)
	{
		for (m = n+1; m <= '9'; m++)
		{
			putchar(n);
			putchar(m);

			if (m == '9' && n == '8')
				break;

			putchar(',');
			putchar(' ');
		}
	}

putchar('\n');
return (0);
}
