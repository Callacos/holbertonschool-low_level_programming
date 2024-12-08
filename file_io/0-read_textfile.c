#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 *  standard output.
 * @filename: The name of the file to be read.
 * @letters: The number of letters it should read and print.
 *
 * Description: This function opens a file, reads its
 *  content up to a specified number of letters,
 * and prints the content to the standard output.
 *
 * Return: If the function fails, it returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t bytes_read;
ssize_t bytes_written;

if (!filename)
	return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
	return (0);

buffer = malloc(sizeof(char) * (letters + 1));
if (!buffer)
{
	close(fd);
	return (0);
}

bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
	free(buffer);
	close(fd);
	return (0);
}

buffer[bytes_read] = '\0';
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

free(buffer);
close(fd);

if (bytes_written != bytes_read)
	return (0);

return (bytes_written);
}
