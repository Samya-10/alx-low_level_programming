#include "main.h"

/**
 * get_endianness - changes the bits.
 *
 * Return:  0(little endian) 1(big endian).
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
