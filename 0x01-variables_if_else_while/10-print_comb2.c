#include <stdio.h>

/**
  * main - Program to print double digit integers
  * n - variable
  * Return: 0
  */
int main(void)
{
	long int n;

	for (n = 0 ; n < 100 ; n++)
	{
		putchar(n / 10 + '0');
		putchar(n % 10 + '0');
	if (n != 99)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
