#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * str_concat - function to concat both strings
  * @s1: pointer to first string
  * @s2: pointer to second string
  * Return: both strings
  */
char *str_concat(char *s1, char *s2)
{
	unsigned int length1 = 0;
	unsigned int length2 = 0;
	unsigned int indexer;
	char *concat;

	if (s1 != NULL)
	{
		for (length1 = 0; s1[length1] != '\0';)
			length1++;
	}
	if (s2 != NULL)
	{
		for (length2 = 0; s2[length2] != '\0';)
			length2++;
	}
	concat = malloc((length1 + length2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	for (indexer = 0; indexer < length1; indexer++)
		concat[indexer] = s1[indexer];
	for (indexer = 0; indexer < length2; indexer++)
		concat[length1 + indexer] = s2[indexer];

	concat[length1 + indexer] = '\0';
	return (concat);
}
