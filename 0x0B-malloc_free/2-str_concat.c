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
	int len1 = 0, len2 = 0;
	int counter;
	char *concat;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}
	concat = malloc((len1 + len2 + 1) * sizeof(char));
	for (counter = 0; counter < len1; counter++)
		concat[counter] = s1[counter];
	for (counter = 0; counter < len2; counter++)
		concat[len1 + counter] = s2[counter];

	concat[len1 + len2 + 1] = '\0';

	if (concat == NULL)
		return (NULL);

	return (concat);
}
