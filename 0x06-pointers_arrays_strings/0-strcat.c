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
	int len_1, len_2, i, j;

	len_1 = strlen(dest);
	len_2 = strlen(src);

	for (i = 0; i < len_2; i++)
	{
		j = len_1 + i;
		*(dest + j) = *(src + i);
	}

	retrn (dest);
}
