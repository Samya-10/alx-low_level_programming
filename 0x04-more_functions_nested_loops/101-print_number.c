#include "main.h"
#include <stdio.h>

/**
* print_number - print an integer
* @n: the integer
* Return: void
*/

void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		n *= -1;
		a = n;
		_putchar('-');
	}
	a /= 10;

	_putchar('#');
	if (a != 0)
	{
		print_number(a);
	}
	_putchar((unsigned int) n % 10 + '0');
}
