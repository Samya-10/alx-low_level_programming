#include "main.h"

/**
* print_line - print line
* @n: the length of line
* Return: void
*/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
        	}
	}
	_putchar('\n');
}
