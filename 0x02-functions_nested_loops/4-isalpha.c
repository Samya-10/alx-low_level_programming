#include "main.h"

/**
 * _isalpha - print the alphabets
 * @c: name of the character
 * Return: void
 */

int _isalpha(int c)
{

	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
		return (0);	
}
