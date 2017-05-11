#include <stdio.h>
#include <unistd.h>
/**
* main - prints string
* Return: 1 prints to standard error
*/

int main(void)
{
	const char msg[] = "and that piece of art is useful\" - Dora Korpar\
, 2015-10-19\n";
	write(STDERR_FILENO, msg, sizeof(msg) - 1);

	return (1);
}
