#include <stdio.h>

/**
  * main - Program printing from all numbers from base 16 in lowercase
  * n - varaible for number
  * alpha - variable for alphabet
  * Return: 0
  */
int main(void)
{
	int n;
	char alpha;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}
	for (alpha = 'a' ; alpha <= 'f' ; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
