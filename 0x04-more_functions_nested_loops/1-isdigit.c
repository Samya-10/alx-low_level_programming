#include "main.h"

/**
 * _isdigit - check if digit
 * @c: the integer
 * Return: 1 if digit, or 0 otherwise (success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
