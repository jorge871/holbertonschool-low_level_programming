#include "function_pointers.h"
/**
 * int_index - ...
 * @array: ...
 * @size: ...
 * @cmp: ...
 *
 * Return: ...
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int f = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (f < size)
			{
				if (cmp(array[f]))
					return (f);

				f++;
			}
		}
	}
	return (-1);
}
