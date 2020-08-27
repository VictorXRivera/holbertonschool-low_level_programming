#include "search_algos.h"

/**
* linear_search - Linear search algo
* @array: pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
* Return: the first index where value is located
*/

int linear_search(int *array, size_t size, int value)
{
	int index;

	if (!array)
		return (-1);

	for (index = 0; index < (int)size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
