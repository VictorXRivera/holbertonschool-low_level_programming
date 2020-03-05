#include "holberton.h"

/**
  * malloc_checked - function that allocates memory using malloc
  * @b: Int being passed to func
  * Return: Pointer
  */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
