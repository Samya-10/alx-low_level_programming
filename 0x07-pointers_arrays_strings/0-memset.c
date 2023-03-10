#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _memset - fill strings
* @s: the string
* @b: the character
* @n: the number of characters to fill in *s
* Return: the new string
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
