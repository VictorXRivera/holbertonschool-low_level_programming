#include <stdio.h>
/**
  * main - Program to print alphabet without q and e
  * alpha - variable
  * Return: (0) Success
  */
int main(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
	}
	putchar('\n');
	return (0);
}
