#include "function_pointers.h"

/**
  * array_iterator - function to execute function given as
  * parameter on each element of array
  * @array: pointer to an array
  * @action: pointer to function
  * @size: size of array
  * Return: Nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
