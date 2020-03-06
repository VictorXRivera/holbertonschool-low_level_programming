#include "holberton.h"

/**
  * _calloc - function to allocate memory for an array
  * @nmemb: array of nmemb elements
  * @size: Bytes
  * Return: Returns a pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int indexer;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (indexer = 0; indexer < nmemb * size; indexer++)
		ptr[indexer] = '\0';

	return (ptr);
}
