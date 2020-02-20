#include "holberton.h"

/**
  * _strncpy - function to copy string
  * @src: pointer parameter
  * @dest: pointer parameter
  * @n: parameter
  * Return: Success
  */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (index < n && src[index] != 0)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = src[index];
	return (dest);
}
