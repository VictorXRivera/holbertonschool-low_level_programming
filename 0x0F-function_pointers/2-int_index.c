#include "function_pointers.h"

/**
  * int_index - Function to set search for an integer
  * @array: Array of ints
  * @cmp: function pointer to int_index
  * @size: size of the array
  * Return: Nothing
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
