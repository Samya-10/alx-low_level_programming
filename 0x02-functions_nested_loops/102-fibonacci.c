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

	int i, fibo, fibo_0 = 0, fibo_1 = 1;

	for (i = 2; i <= 50; i++)
	{
		printf("%d, ", fibo_0);

		fibo_0 = fibo_1;
		fibo_1 = fibo;		


		if (i == 50)
		{
			printf("%d, %d\n", fibo_1, fibo);
		}
	}
	return (0);
}
