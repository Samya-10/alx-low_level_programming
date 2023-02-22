#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets
 *
 * Return: void
 */

void print_alphabet_x10(void);
{

	char c;

	for (int i = 1; i <= 10; i++)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
		}

		_putchar('\n');
	}
	
}
