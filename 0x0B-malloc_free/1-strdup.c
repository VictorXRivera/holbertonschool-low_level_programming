#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * _strdup - function to duplicate string from pointer
  * @str: Pointer to string being passed into program
  * Return: Duplicated string
  */
char *_strdup(char *str)
{
	str = (char *)malloc(100 * sizeof(char));
	if (*str == '\0')
	{
		return (NULL);
	}

	return (str);
}
