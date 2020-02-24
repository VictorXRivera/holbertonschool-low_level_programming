#include "holberton.h"

/**
  * _memset - function fills the first @n bytes of the memory
  * area pointed to by @s with the constant byte @b
  * @s: pointer pointing to memory area
  * @b: constant byte
  * @n: bytes of memory area
  * Return: Pointer to mem address @s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
