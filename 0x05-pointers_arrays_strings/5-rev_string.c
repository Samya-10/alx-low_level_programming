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
	char s1[] = *s;
	char *str = s1;

	len = strlen(s);
	j = 0;
	for (i = len - 1; i >= 0; i--)
	{
		str[j] = s[i];
		j++;
	}
}
