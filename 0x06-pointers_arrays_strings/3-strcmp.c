#include "holberton.h"

/**
  * _strcmp - function to compare two strings
  * @s1: pointer
  * @s2: pointer
  * Return: Success
  */
int _strcmp(char *s1, char *s2)
{
	int string = 0;

	while (s1[string] != '\0' && s2[string] != '\0' && s1[string] == s2[string])
	{
		string++;
	}
	return (s1[string] - s2[string]);
}
