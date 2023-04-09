#include "main.h"

/**
 * get_bit - returns the value of a bit in the position of index
 * @n: the decimal to check
 * @index: the position of the bit to return
 *
 * Return: the value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitValue;

	if (index > 63)
		return (-1);

	bitValue = (n >> index) & 1;

	return (bitValue);
}
