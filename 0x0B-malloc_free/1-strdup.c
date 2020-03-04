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
	int original_size = 0;
	char *duplicate_str;
	char *dup_offset;

	if (str == NULL)
		return (NULL);

	while (str[original_size] != '\0')
		original_size++;
	original_size++;

	duplicate_str = (char *)malloc(sizeof(char) * original_size);
	if (duplicate_str == NULL)
		return (NULL);

	dup_offset = duplicate_str;
	while (*str)
	{
		*dup_offset = *str;
		dup_offset++;
		str++;
	}
	*dup_offset = '\0';
	return (duplicate_str);
}
