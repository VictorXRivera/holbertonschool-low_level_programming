#include "holberton.h"

/**
  * rot13 - encode string with rot13
  * @s: pointer parameter
  * Return: Success
  */
char *rot13(char *s)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int index, dec;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (dec = 0; alphabet[dec]; dec++)
		{
			if (alphabet[dec] == s[index])
			{
				s[index] = rot13[dec];
				break;
			}
		}
	}
	return (s);
}
