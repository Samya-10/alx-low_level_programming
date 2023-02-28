#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - print characters
 * @str: the string
 * Return: nothing
 */

void puts_half(char *str)
{
	int len, n;

	len = strlen(str);
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
		n += 1;
	}

	while (n < len)
	{
		printf("%c", *(str + n));
		n++;
	}
	printf("\n");
}
