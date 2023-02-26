#include "main.h"

/**
* print_triangle - print a triangle
* @size: size of the triangle
* Return: void
*/

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - 1; j >= i; j--)
			{
				_putchar(' ');
			}
			for (k = size; k + i > size; k--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
