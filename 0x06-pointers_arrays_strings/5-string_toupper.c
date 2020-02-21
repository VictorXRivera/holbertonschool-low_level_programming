#include "holberton.h"

/**
  * string_toupper - function to change all letters from lower to upper
  * @s: pointer
  * Return: Success
  */
char *string_toupper(char *s)
{
	int letters = 0;

	while (s[letters])
	{
		if (s[letters] >= 'a' && s[letters] <= 'z')
		{
			s[letters] -= 32;
		}
		letters++;
	}
	return (s);
}
