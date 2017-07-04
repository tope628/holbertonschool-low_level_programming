#include "holberton.h"

/**
  * read_textfile - read file and print to stdout
  * @filename: text file
  * @letters: number of letters to read and print
  * Return: 1 on sucess, 0 if fail
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
       	ssize_t numr, length;
	char *buf;


	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);
	
	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	numr = read(fd, buf, letters);

	if (numr < 0)
	{
		free(buf);
		close(fd);
		return (0);
	}

	length = write(STDOUT_FILENO, buf, numr);

	if (length < 0)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (length);
}
