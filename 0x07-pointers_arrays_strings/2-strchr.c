#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strchr - fill string with copy of a string
* @s: the string to copy
* @c: the number of characters to fill in *dest
* Return: the new string
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);		
		}

	}

	return (NULL);
}
