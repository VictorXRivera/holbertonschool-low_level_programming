#include <stdio.h>

/**
  * main - Program to print alphabet in reverse
  * alpha - variable
  * Return: Success
  */
int main(void)
{
	char alpha;

	for (alpha = 'z' ; alpha >= 'a' ; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
