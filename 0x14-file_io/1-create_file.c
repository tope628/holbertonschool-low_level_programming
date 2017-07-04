#include "holberton.h"

/**
  * create_file - read file and print to stdout
  * @filename: text file
  * @text_content: number of letters to read and print
  * Return: 1 on sucess, 0 if fail
  */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t length;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
	}
	length = write(fd, text_content, i);
	if (length < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
