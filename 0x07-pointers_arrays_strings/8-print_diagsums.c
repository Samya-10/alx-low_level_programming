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
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i][i];
	}
	printf("%d, ", sum);
	sum = 0;
	for (i = 0; i < size; i++)
	{
		j = size - i - 1;
		sum += a[i][j];
	}
	printf("%d\n ", sum);

}
