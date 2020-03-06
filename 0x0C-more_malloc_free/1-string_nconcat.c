#include "holberton.h"

/**
  * string_nconcat - function to concat two strings
  * @s1: String one
  * @s2: String two
  * @n: Unsigned int
  * Return: Pointer to new allocated space containing s1 and n bytes of s2
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
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
	if (n >= length2)
		n = length2;
	concat = malloc((length1 + n + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	for (indexer = 0; indexer < length1; indexer++)
		concat[indexer] = s1[indexer];
	for (indexer = 0; indexer < n; indexer++)
		concat[length1 + indexer] = s2[indexer];

	concat[length1 + indexer] = '\0';
	return (concat);
}
