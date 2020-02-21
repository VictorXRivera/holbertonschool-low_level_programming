#include "holberton.h"

/**
  * cap_string - function to capitalize
  * @s: pointer parameter
  * Return: Success
  */
char *cap_string(char *s)
{
	int count;
	char last_case;

	for (count = 0, last_case = '.'; s[count] != '\0'; count++)
	{
		if (
				last_case == ' ' ||
				last_case == '\t' ||
				last_case == '\n' ||
				last_case == ',' ||
				last_case == ';' ||
				last_case == '.' ||
				last_case == '!' ||
				last_case == '?' ||
				last_case == '"' ||
				last_case == '(' ||
				last_case == ')' ||
				last_case == '{' ||
				last_case == '}' ||
				count == 0)
		{
			if (s[count] >= 'a' && s[count] <= 'z')
				s[count] -= 32;
		}
		last_case = s[count];
	}
	return (s);
}
