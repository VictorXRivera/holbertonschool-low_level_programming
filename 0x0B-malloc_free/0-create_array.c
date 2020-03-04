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
	char *ptr;
	unsigned int indexer;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));
	if (ptr == 0)
		return (NULL);

	indexer = 0;
	while (indexer < size)
	{
		ptr[indexer] = c;
		indexer++;
	}
	return (ptr);
}
