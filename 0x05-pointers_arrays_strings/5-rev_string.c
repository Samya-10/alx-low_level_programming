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
	char *str = "";

	len = strlen(s);
	j = 0;
	for (i = len - 1; i >= 0; i--)
	{
		str[j] = s[i];
		j++;
	}
}
