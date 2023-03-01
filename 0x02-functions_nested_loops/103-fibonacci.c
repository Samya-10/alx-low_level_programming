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

        long fibo, fibo_0 = 1, fibo_1 = 2, sum = 0;

        while (fibo_0 <= 4000000)
        {
		if (fibo_0 % 2 == 0)
                {
			sum += fibo_0;
                }


                fibo = fibo_1 + fibo_0;
                fibo_0 = fibo_1;
                fibo_1 = fibo;
        }
	printf("%ld", sum);
        return (0);
}
