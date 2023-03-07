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
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return (NULL);
}
