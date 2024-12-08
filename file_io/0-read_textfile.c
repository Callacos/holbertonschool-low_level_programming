	#include "main.h"

	/**
	 * read_textfile - Reads a text file and prints
	 * it to the POSIX standard output.
	 * @filename: The name of the file to be read.
	 * @letters: The number of letters it should read and print.
	 *
	 * Return: If the function fails, it returns 0.
	 * Otherwise, it returns the actual number of bytes the function
	 *  can read and print.
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
}
