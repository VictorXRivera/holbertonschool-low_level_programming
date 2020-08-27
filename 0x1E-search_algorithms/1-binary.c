#include "search_algos.h"

/**
  * binary_search - Binary search algo
  * @array: pointer to the first element of the array to search in
  * @size: the number of elements in array
  * @value: is the value to search for
  * Return: the index where value is located
  */
int binary_search(int *array, size_t size, int value)
{
	unsigned int left = 0, right;
	unsigned int middle, iterator;

	if (!array)
		return (-1);

	for (right = size - 1; size > 0; size = size / 2)
	{
		printf("Searching in array: ");
		for (iterator = left; iterator <= right; iterator++)
		{
			if (iterator < right)
				printf("%d, ", array[iterator]);
			else
				printf("%d\n", array[iterator]);
		}
		middle = ((right - left) / 2) + left;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] > value)
			right = middle;
		else if (array[middle] < value)
			left = middle + 1;
	}
	return (-1);
}
