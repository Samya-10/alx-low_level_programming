#include "main.h"
#include <stdio.h>

/**
 * main - Prints its name
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
