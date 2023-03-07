#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _memcpy - fill string with copy of a string
* @dest: the string 1
* @src: the string to copy
* @n: the number of characters to fill in *dest
* Return: the new string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
