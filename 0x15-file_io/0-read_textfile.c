#include "holberton.h"

/**
  * read_textfile - function to read text file
  * @filename: name of file
  * @letters: number of letters it should read and write
  * Return: text file
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t toread, towrite;
	int toopen;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	toopen = open(filename, O_RDONLY);
	if (toopen == -1)
	{
		free(buffer);
		return (0);
	}
	toread = read(toopen, buffer, letters);
	if (toread == -1)
	{
		close(toopen);
		free(buffer);
		return (0);
	}

	towrite = write(STDOUT_FILENO, buffer, toread);
	free(buffer);
	close(toopen);

	if (towrite == toread)
		return (towrite);
	return (0);
}
