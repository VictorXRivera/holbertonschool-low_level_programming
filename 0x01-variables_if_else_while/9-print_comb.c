#include <stdio.h>

/**
  * main - Program to print base 10 single digits with special characters
  * n - variable for numbers
  * Return: 0
  */
int main(void)
{
	int n;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);	
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
