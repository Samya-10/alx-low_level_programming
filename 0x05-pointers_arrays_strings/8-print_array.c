#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elts from array
 * @a: the array
 * @n: the number
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int len, i;

	len = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < n && i < len ; i++)  
	{
		if (i == n - 1 || i == len -1)
		{
			printf("%d\n", *(a + i));
			break;	
		}
		printf("%d, ", *(a + i));
	} 
}
