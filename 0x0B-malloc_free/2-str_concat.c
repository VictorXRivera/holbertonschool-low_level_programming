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
	int len1, len2 = 0; 
	int counter1, counter2;
	char *concat;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[len1] != '\0')
	{
		counter1 = s1[len1];
		len1++;
	}
	while (s2[len2] != '\0')
	{
		counter2 = s2[len2];
		len2++;
	}
	
	if (counter1 == 0 || counter2 == 0)
		return (NULL);

	concat = (char *)malloc((counter1 + counter2 + 1) * sizeof(char));

	for (counter1 = 0; s1[counter1] != '\0'; counter1++)
		concat[counter1] = s1[counter1];

	for (counter2 = 0; s2[counter2] != '\0'; counter2++)
		concat[counter1] = s2[counter2];
	
	concat[counter1] = '\0';
	return (concat);
}
