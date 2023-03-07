#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strpbrk - the assemblance with a string
* @s: the string to check
* @accept: to string to compare
* Return: the new string
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		s++;
	}

	return (NULL);
}
