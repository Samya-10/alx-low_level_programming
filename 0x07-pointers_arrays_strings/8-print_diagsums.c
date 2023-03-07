#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_diagsums - print the diagonals sum
* @a: the array
* @size: the size
* Return: void
*/

void print_diagsums(int *a, int size)
{

	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];
	}
	for (i = 0; i < size; i++)
	{
		j = size - i;
		sum2 += a[i][j - 1];
	}
	printf("%d, %d\n", sum1, sum2);
}
