#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strstr - the assemblance with a string
* @haystack: the string to check
* @needle: to string to compare
* Return: the new string
*/

char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
			if (*n == '\0')
			{
				return (haystack);		
			}
		}
		haystack++;
	}

	return (0);
}
