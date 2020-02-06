#include <stdio.h>

/**
  * main - Program to print alphabet
  *
  * Return: the alphabet
  */
int main(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
