#include "main.h"

/**
 * _isupper - check if uppercase
 * @c: the integer
 * Return: 1 or 0 (success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
