#include "holberton.h"

/**
  * leet - function to encode
  * @str: pointer parameter
  * Return: Success
  */
char *leet(char *str)
{
	char leet [] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char change[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int count, index;

	for (count = 0; str[count] != '\0'; count++)
	{
		for (index = 0; leet[index]; index++)
		{
			if (leet[index] == str[count])
				str[count] = change[index];
		}
	}
	return (str);
}
