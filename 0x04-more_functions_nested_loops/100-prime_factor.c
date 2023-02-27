#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long n, max_factor;
	long num = 612852475143;
	double square = sqrt(num);

	for (n = 1; n <= square; n++)
	{
		if (num % n == 0)
		{
			max_factor = num / n;
		}
	}

	printf("%ld\n", max_factor);
	return (0);
}
