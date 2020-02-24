#include "holberton.h"
#include <stdio.h>

/**
  * _strchr - Function that locates a character in a string
  * @s: Pointer to string s
  * @c: first occurance of character
  * Return: First occurance if char is found, NULL if not
  */
char *_strchr(char *s, char c)
{
	for (; *s ; s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
