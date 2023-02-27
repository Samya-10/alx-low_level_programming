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
	int len, i;

	len = strlen(s);

	char str[len];

	for (i = len - 1; i >= 0; i--)
	{
		*(str + len - i - 1) = *(s + i);
	}
}
