#include "search_algos.h"
int
linear_search(int *array, size_t size, int value)
{
	unsigned int sr_en;

	if (array == NULL)
		return (-1);
	for (sr_en = 0; sr_en < size; sr_en++)
	{
		printf("Value checked array[%d] = [%d]\n", sr_en, array[sr_en]);
		if (array[sr_en] == value)
		{
			return (sr_en);
		}
	}
	return (-1);
}