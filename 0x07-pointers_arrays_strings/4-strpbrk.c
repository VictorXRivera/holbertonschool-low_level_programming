#include "holberton.h"
#include <stdio.h>

/**
  * _strpbrk - Function that searches a string for any of a set of bytes
  * @s: Pointer to the byte
  * @accept: Bytes to be matched
  * Return: Pointer to bytes
  */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s != '\0')
	{
		for (index = 0; accept[index] != '\0'; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return (NULL);
}
