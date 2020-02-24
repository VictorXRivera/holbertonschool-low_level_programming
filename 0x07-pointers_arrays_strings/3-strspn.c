#include "holberton.h"

/**
  * _strspn - function that gets the length of prefix string
  * @s: number of bytes in initial seg
  * @accept: bytes to put into s
  * Return: Number of bytes
  */
unsigned int _strspn(char *s, char *accept)
{
	int index1, index2;

	for (index1 = 0; s[index1] != ' '; index1++)
	{
		for (index2 = 0; accept[index2] != '\0'; index2++)
		{
			if (s[index1] == accept[index2])
			{
				break;
			}
		}
		if (!accept[index2])
			break;
	}
	return (index1);
}
