#include "holberton.h"

int copy_file(int num1, int num2, char *from, char *to);
/**
* main - copies one file to another
* Return: an integer depending on if the function succeeded
* @argc: number of args
* @argv: the list of args
*/
int main(int argc, char *argv[])
{
	int num1, num2, t1, t2, copy;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	num1 = open(argv[1], O_RDONLY);
	if (num1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	num2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (num2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	copy = copy_file(num1, num2, argv[1], argv[2]);
	if (copy != 1)
		exit(copy);
	t1 = close(num1);
	if (t1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", num1);
		exit(100);
	}
	t2 = close(num2);
	if (t2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", num2);
		exit(100);
	}
	return (0);
}
/**
* copy_file - if files exist, copies it
* Return:1 for success, or error code
* @num1: filenumber fd to copy from
* @num2: file number to copy to
* @from: the name of the source file
* @to: name of the dest file
*/
int copy_file(int num1, int num2, char *from, char *to)
{
	char buffer[1024];
	int w_num, r_num;

	for (w_num = 1024; w_num == 1024;)
	{
		r_num = read(num1, buffer, 1024);
		if (r_num == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
			return (98);
		}
		w_num = write(num2, buffer, r_num);
		if (w_num == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			return (99);
		}
	}
	return (1);
}
