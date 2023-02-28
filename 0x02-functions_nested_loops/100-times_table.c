#include "main.h"

/**
 * print_times_table - print the table of integers
 * @n: the integer
 * Return: void
 */

void print_times_table(int n)
{
	int i, mul, prd;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			printf("0");
			for (mul = 1; mul <= n; mul++)
			{
				printf(", ");
				prd = i * mul;
				if (prd <= 99)
					printf(" ");
				if (prd <= 9)
					printf(" ");
				if (prd >= 100)
				{
					printf("%d", (prd / 100));
					printf("%d", (prd / 10) % 10);
				}
				else if (prd <= 99 && prd >= 10)
				{
					printf("%d", (prd / 10));
				}
				printf("%d", (prd % 10));
			}
			printf("\n");
		}

	}
}
