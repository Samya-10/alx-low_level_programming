#include "main.h"

/**
 * _atoi - string to integer
 * @s: the string
 * Return: the integer
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int n = 0;
	int sign = 1;
	int isNum = 0;

	while (*(s + i))
	{
		if (*(s + i) == 45)
		{
			sign *= -1;
		}
		while (*(s + i) >= 48 && *(s + i) <= 57)
		{
			isNum = 1;
			n = (n * 10) + (*(s + i) - '0');
			i++;
		}

		if (isNum == 1)
		{
			break;
		}
		i++;
	}

	n *= sign;
	return (n);
}
