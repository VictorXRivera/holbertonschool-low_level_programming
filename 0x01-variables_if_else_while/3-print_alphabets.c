#include <stdio.h>
/**
  * main- program to print alphabet from lower to upper
  *
  * alpha - variable for lowercase
  * ALPHA - variable for uppercase
  *
  * Return: print alphabet from lower to upper on one line followed by newline
  */
int main(void)
{
	char alpha;
	char ALPHA;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		putchar(alpha);
	}
	for (ALPHA = 'A' ; ALPHA <= 'Z' ; ALPHA++)
	{
		putchar(ALPHA);
	}
	putchar('\n');
	return (0);
}
