#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long fibo, fibo_0 = 1, fibo_1 = 2;

	for (i = 2; i <= 98; i++)
	{
		printf("%lu, ", fibo_0);

		fibo = fibo_1 + fibo_0;
		fibo_0 = fibo_1;
		fibo_1 = fibo;

		if (i == 98)
		{
			printf("%lu\n", fibo_0);
		}
	}
	return (0);
}
