#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - Read and print text from a file
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 * Return: Number of letters read and printed, or 0 if an error occurs
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t bytes_read, bytes_written, total_written = 0;
char *buffer;
int fd;

if (filename == NULL)
	return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
	return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
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

bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
	free(buffer);
	close(fd);
	return (0);
}

total_written = bytes_written;

free(buffer);
close(fd);
return (total_written);
}
