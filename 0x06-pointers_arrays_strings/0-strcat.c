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
	int len, i;

	len = 0;

	While (dest[len])
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return ( dest );
}
