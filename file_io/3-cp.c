#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * handle_close - Closes a file descriptor and handles
 *  errors if the operation fails.
 * @fd: The file descriptor to be closed.
 */
void handle_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * open_file_for_reading - Opens a file for reading
 * and handles errors if the operation fails.
 * @filename: The name of the file to be opened.
 * Return: The file descriptor for the opened file.
 */
int open_file_for_reading(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * open_file_for_writing - Opens a file for writing
 * and handles errors if the operation fails.
 * @filename: The name of the file to be opened.
 * Return: The file descriptor for the opened file.
 */
int open_file_for_writing(const char *filename)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (fd);
}

/**
 * copy_file - Reads from a source file and writes
 *  its content to a destination file.
 * @fd_from: The file descriptor for the source file.
 * @fd_to: The file descriptor for the destination file.
 */
void copy_file(int fd_from, int fd_to)
{
	ssize_t read_bytes, write_bytes;
	char buffer[1024];

	while ((read_bytes = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes != read_bytes)
		{
			handle_close(fd_from);
			handle_close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			exit(99);
		}
	}
	if (read_bytes == -1)
	{
		handle_close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98);
	}
	if (read_bytes == 0)
	{
		char newline = '\n';

		write(fd_to, &newline, 1);
	}
}

/**
 * main - Copies content from one file to another.
 * @ac: Argument count.
 * @av: Argument vector (array of argument strings).
 * Return: 0 on success, various error codes on failure.
 */
int main(int ac, char *av[])
{
		int fd_from;
		int fd_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_file_for_reading(av[1]);
	fd_to = open_file_for_writing(av[2]);

	copy_file(fd_from, fd_to);

	char newline = '\n';

	if (write(fd_to, &newline, 1) == -1)
	{
		handle_close(fd_from);
		handle_close(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't write newline to %s\n", av[2]);
		exit(99);
	}

	handle_close(fd_from);
	handle_close(fd_to);

	return (0);
}
