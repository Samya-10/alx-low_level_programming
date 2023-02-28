#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - print characters
 * @str: the string
 * Return: nothing
 */

void puts2(char *str)
{
	int len, i;

	len = strlen(str);

	for (i = 0; i < len ; i += 2)  
	{
		printf("%c", *(str + i));
	}
	printf("\n");
}
