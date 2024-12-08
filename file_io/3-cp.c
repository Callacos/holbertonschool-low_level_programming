#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#define ERROR(msg, file) (dprintf(2, msg, file), exit(1))
/**
 * main - Copy the content of a file to another file
 * @ac: Number of arguments
 * @av: Array of argument strings
 * Return: 0 on success, exit codes on failure
 */
int main(int ac, char **av)
{
	int fds[2], n;
	char buffer[1024];

	if (ac != 3)
		ERROR("Usage: %s file_from file_to\n", av[0]);
	fds[0] = open(av[1], O_RDONLY);

	if (fds[0] == -1)
		ERROR("Error: Can't read from %s\n", av[1]);
	fds[1] = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fds[1] == -1)
		close(fds[0]), ERROR("Error: Can't write to %s\n", av[2]);

	while ((n = read(fds[0], buffer, sizeof(buffer))) > 0)
	{
		if (write(fds[1], buffer, n) == -1 || n != write(fds[1], buffer, n))
		{
			close(fds[0]);
			close(fds[1]);
			ERROR("Error: can't write to %s\n", av[2]);
		}
	}
	if (n == -1)
		close(fds[0]), close(fds[1]), ERROR("Error: Can't read from %s\n", av[1]);

	if (close(fds[0]) == -1 || close(fds[1]) == -1)
		ERROR("Error: Can't close fd %d\n", fds[0] == -1 ? fds[1] : fds[0]);
	return (0);
}
