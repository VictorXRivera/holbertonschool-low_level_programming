#include "holberton.h"

/**
  * rev_string - function to reverse a strin g
  * @s: parameter
  * Return: Success
  */
void rev_string(char *s)
{
	int cnt = 0;
	char temp[999];
	int index = 0;
	int rev = 0;

	while (s[cnt] != '\0')
	{
		temp[cnt] = s[cnt];
		cnt++;
	}
	cnt--;
	rev = cnt;
	while (index <= cnt)
	{
		s[index] = temp[rev];
		index++;
		rev--;
	}
	s[index] = '\0';
}
