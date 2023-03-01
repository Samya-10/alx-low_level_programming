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
	long fibo, fibo_0 = 1, fibo_1 = 2;

	for (i = 2; i <= 50; i++)
	{
		printf("%d, ", fibo_0);

		fibo = fibo_1 + fibo_0;
		fibo_0 = fibo_1;
		fibo_1 = fibo;

		if (i == 50)
		{
			printf("%ld\n", fibo);
		}
	}
	return (0);
}
