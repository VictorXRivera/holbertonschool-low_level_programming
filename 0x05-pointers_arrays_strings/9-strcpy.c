#include "holberton.h"

/**
  * _strcpy - function to copy string
  * @src: pointer parameter
  * @dest: pointer parameter
  * Return: Success
  */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (*(src + index) != 0)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = src[index];
	return (dest);
}
