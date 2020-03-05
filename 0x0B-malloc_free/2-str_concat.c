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
	int counter1 = 0, counter2 = 0;
	char *concat;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
		{
			counter1 = s1[len1];
			len1++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			counter2 = s2[len2];
			len2++;
		}
	}
	concat = malloc((counter1 + counter2 + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (counter1 = 0; s1[counter1] != '\0'; counter1++)
		concat[counter1] = s1[counter1];

	for (counter2 = 0; s2[counter2] != '\0'; counter2++)
		concat[counter1 + counter2] = s2[counter2];

	return (concat);
}
