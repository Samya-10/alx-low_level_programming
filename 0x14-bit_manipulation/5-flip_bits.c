#include "main.h"

/**
 * flip_bits - changes the bits.
 * @n: the first decimal
 * @m: the second decimal
 *
 * Return: number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int k;
	unsigned long int excl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		k = excl >> i;
		if (k & 1)
			count++;
	}

	return (count);
}
