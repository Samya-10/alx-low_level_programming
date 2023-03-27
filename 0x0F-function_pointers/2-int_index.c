#include "function_pointers.h"

/**
 * int_index - call functions.
 * @array: The name of the array.
 * @size: size of the array.
 * @cmp: Pointer to function.
 *
 * Return: Success.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if ((array != NULL) && (cmp != NULL))
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}		
	}

return (-1);
}
