#include "search_algos.h"
/**
 * linear_search - this is a function that
 * searches for a value in an array of integers.
 * @array: This is a pointer to the first element of the array.
 * @size: This is the number of elements in array.
 * @value: This is the value to search.
 * Return: return -1
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int search;

	if (array == NULL)
		return (-1);
	for (search = 0; search < size; search++)
	{
		printf("Value checked array[%d] = [%d]\n", search, array[search]);
		if (array[search] == value)
		{
			return (search);
		}
	}
	return (-1);
}
