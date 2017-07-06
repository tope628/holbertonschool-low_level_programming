#include "holberton.h"

/**
  * error - error check and corresponding exit number
  * @n: error number
  * @file: file name
  */

void error(int n, char *file)
{
	switch (n)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
			exit(98);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
			exit(99);
		default:
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", n);
			exit(100);
	}
}
/**
  * main - copies file
  * @argc: argument count
  * @argv: different arguments
  * Return: 0 on success
  */

int main(int argc, char *argv[])
{
	int fail, count, file_from, file_to;
	char buf[1024];

	if (argc != 3)
		error(97, NULL);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error(98, argv[1]);
	file_to = open(argv[2],  O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error(99, argv[2]);
	fail = 1024;
	while (fail == 1024)
	{
		fail = read(file_from, buf, 1024);
		if (fail == -1)
			error(98, argv[1]);
		count = write(file_to, buf, fail);
		if (count != fail)
			error(99, argv[2]);
	}
	fail = close(file_from);
	if (fail == -1)
		error(100, NULL);
	fail = close(file_to);
	if (fail == -1)
		error(100, NULL);
	return (0);
}
