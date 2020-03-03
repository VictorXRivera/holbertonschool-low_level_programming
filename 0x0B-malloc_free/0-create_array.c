#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - function to create array of characters
  * @size: unsigned int parameter
  * @c: char parameter
  * Return: Array
  */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int indexer;

	array = malloc((size + 1) * sizeof(char));
	if (array == 0)
	{
		return (NULL);
	}
	indexer = 0;
	while (indexer < size)
	{
		array[indexer] = c;
		indexer++;
	}
	array[indexer] = '\0';
	return (array);
}
