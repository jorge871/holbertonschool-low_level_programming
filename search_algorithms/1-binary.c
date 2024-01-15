#include "search_algos.h"

/**
 * binary_search - This is a function that searches
 * for a value in a sorted array of integers
 * @array: This is a pointer to the first
 * element of the array to search.
 * @size: This is the number of elements in array.
 * @value: This is the value to search.
 * Return: Index of value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int sr_bin = size - 1, val1, val2 = 0, index = 0;
	unsigned int var;

	if (array == NULL || sr_bin < 0)
		return (-1);
	printf("Searching in array: ");
	for (var = 0; var < size; var++)
	{
		if (var != 0)
		{
			printf(", ");
		}
		printf("%d", array[var]);
	}
	printf("\n");
	val1 = sr_bin / 2;
	if (value < array[val1])
	{
		index = binary_search(array, val1, value);
	}
	else if (value > array[val1])
	{
		index = binary_search(&array[val1 + 1], sr_bin - val1, value);
		val2 = sr_bin - val1;
	}
	else
		val2 = val1;
	if (index == -1)
		return (-1);
	return (index + val2);
}