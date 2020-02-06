#include <stdio.h>

/**
  * main - print all digits from base 10
  * n - variable for integers
  * Return: (0) Success
  */
int main(void)
{
	int n;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
