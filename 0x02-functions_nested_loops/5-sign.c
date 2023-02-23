#include "main.h"

/**
 * print_sign - print the alphabets
 * @n: the integer to evaluate
 * Return: 1, 0, -1 success
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
