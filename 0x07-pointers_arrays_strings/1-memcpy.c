#include "holberton.h"

/**
  * _memcpy - function that copies memory area
  * @n: bytes from memory area
  * @src: memory area
  * @dest: memory area to take in copied information from src
  * Return: Memory area copied to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];

	return (dest);
}
