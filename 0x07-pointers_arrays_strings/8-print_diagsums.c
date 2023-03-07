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

	int i, j;
	long sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i][i];
	}
	printf("%ld, ", sum);
	sum = 0;
	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j >= 0; j--)
		{
			sum += a[i][j];
		}
	}
	printf("%ld ", sum);

}
