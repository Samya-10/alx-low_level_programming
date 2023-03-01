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
	long fibo, fibo_0 = 0, fibo_1 = 1;

	for (i = 2; i <= 50; i++)
	{

		fibo = fibo_1 + fibo_0;
		fibo_0 = fibo_1;
		fibo_1 = fibo;

		printf("%ld, ", fibo_0);
		if (i == 50)
		{
			printf("%ld\n", fibo);
		}
	}
	return (0);
}
