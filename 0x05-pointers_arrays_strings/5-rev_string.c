#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: the string
 * Return: nothing
 */

void rev_string(char *s)
{
	int len, i, j;
	char *str;

	len = strlen(s);
	for (j = 0, i = len - 1; j < len && i >= 0;j++, i--)
	{
		*(str + j) = *(s + i);
	}
}
