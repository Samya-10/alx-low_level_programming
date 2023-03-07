#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strspn - the assemblance with a string
* @s: the string to copy
* @accept: to string to compare
* Return: the new string
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}

	return (n);
}
