#include "main.h"

/**
 * clear_bit - changes the bit in the index position to '1'
 * @n: the decimal to change
 * @index: the position of the bit to change
 *
 * Return: 1 (success) or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
