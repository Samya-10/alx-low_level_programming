#include "main.h"
#include <stdio.h>

/**
* _strcat - concatenate strings
* @dest: the string 1
* @src: the string 2
* Return: concatenation
*/

char *_strcat(char *dest, char *src)
{
	int l, i;

	l = 0;

	While (dest[l])
	{
		l++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[l] = src[i];
		l++;
	}
	dest[l] = '\0';
	return ( dest );
}
