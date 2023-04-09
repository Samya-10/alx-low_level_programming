#include "main.h"

/**
 * print_binary - converts unsigned long to binary
 * @n: the decimal of binaries to convert
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i, k = 0;
	unsigned long int bin;

	for (i = 63; i >= 0; i--)
	{
		bin = n >> i;

		if (bin & 1)
		{
			_putchar('1');
			k++;
		}
		else if (k)
			_putchar('0');
	}
}
