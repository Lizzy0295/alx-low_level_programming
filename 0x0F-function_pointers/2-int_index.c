#include "function_pointers.h"

/**
 * int_index - Search for an integer in an array
 * @array: Pointer to the array
 * @size: Number of elements in the array
 * @cmp: Pointer to the comparison function
 *
 * Return:...
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
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
