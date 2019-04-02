#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard out.
 * @filename: pointer to the file to read and print
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes, xwrite;
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	bytes = read(fd, buf, letters);
	if (bytes == -1)
		return (0);
	xwrite = write(STDOUT_FILENO, buf, bytes);
	if (xwrite == -1)
		return (0);
	free(buf);
	close(fd);
	return (bytes);
}
