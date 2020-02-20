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
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[index] = src[index];
	for (; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
