#include "main.h"

/**
 *  _islower - check if lowercase
 * @c: name of the alphabet
 * Return: 0, 1 success
 */

int _islower(int c)
{

	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
return (0);
}
