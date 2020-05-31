#include <stdio.h>
#include <stdlib.h>

/**
 * hexastring - shows bytes in hexastring format
 * @output: start of output
 * @b: number of bytes
 */


void hexastring(char *output, int b)
{
	int h;

	for (h = 0; h < b; h++)
	{
		printf("%02hhx", output[h]);
		if (h < b - 1)
			printf(" ");
		else
			printf("\n");
	}
}

/**
 * main - print out number of bytes of main function
 * @argc: int of arguments
 * @argv: list of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	hexastring((char *)main, num);
	return (0);
}
