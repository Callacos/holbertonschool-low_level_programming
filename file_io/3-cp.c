#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * handle_close - Closes a file descriptor and handles errors
 * @fd: The file descriptor to be closed
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
 * @filename: The name of the file to be opened
 * Return: The file descriptor
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
 * @filename: The name of the file to be opened
 * Return: The file descriptor
 */
int open_file_for_writing(const char *filename)
{
int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);

if (fd == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}
return (fd);
}

/**
 * copy_file - Copies content from one file to another
 * @fd_from: Source file descriptor
 * @fd_to: Destination file descriptor
 */
void copy_file(int fd_from, int fd_to)
{
char buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written;

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
	bytes_written = write(fd_to, buffer, bytes_read);
	if (bytes_written == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to fd %d\n", fd_to);
		exit(99);
	}
}

if (bytes_read == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from fd %d\n", fd_from);
	exit(98);
}
}

/**
 * main - Entry point
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0 on success
 */
int main(int ac, char *av[])
{
int fd_from, fd_to;

if (ac != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

fd_from = open_file_for_reading(av[1]);
fd_to = open_file_for_writing(av[2]);

copy_file(fd_from, fd_to);

handle_close(fd_from);
handle_close(fd_to);

return (0);
}
