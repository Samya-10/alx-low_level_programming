#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return: 0 success
 */

int main(void)
{
	char password[84];
	int i = 0, sum = 0, dif_half1, dif_half2;

	srand(time(0));

	while (sum < 2772)
	{
		password[i] = 33 + rand() % 94;
		sum += password[i++];
	}

	password[i] = '\0';

	if (sum != 2772)
	{
		dif_half1 = (sum - 2772) / 2;
		dif_half2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			dif_half1++;

		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + dif_half1))
			{
				password[i] -= dif_half1;
				break;
			}
		}

		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + dif_half2))
			{
				password[i] -= dif_half2;
				break;
			}
		}

	}

	printf("%s", password);
	return (0);
}
