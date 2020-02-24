#include "holberton.h"
#include <stdio.h>

/**
  * _strstr - Function that locates a substring
  * @haystack: string to find first occurance
  * @needle: Substring
  * Return: First occurance
  */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
