#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string of binaries to convert
 *
 * Return: the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int uint = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		uint = 2 * uint + (b[i] - '0');
	}

	return (uint);
}
