#include "holberton.h"

/**
  * array_range - function to create an array of integers
  * @min: values stored in min
  * @max: parameter to take values
  * Return: Pointer to the newly created array
  */
int *array_range(int min, int max)
{
	int indexer;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc((sizeof(int) * (max - min + 1)));
	if (ptr == NULL)
		return (NULL);
	for (indexer = 0; indexer <= max - min; indexer++)
		ptr[indexer] = min + indexer;
	return (ptr);
}
