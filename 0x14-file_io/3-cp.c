#include "holberton.h"
/**
 * main - Entry point
 * @ac : count
 * @av : array arg
 * Return: (0) always
 */
int main(int ac, char **av)
{
	int filein, fileou, filer, filew, filecl;
	char *buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	filein = open(av[1], O_RDONLY);
	if (av[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fileou = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
		      | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (av[2] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[2]), exit(99);
	filer = read(filein, buf, 1024);
	if (filer == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	while (filer != 0)
	{
		filew = write(fileou, buf, filer);
		if (filer == -1 || filew != filer)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[2]), exit(99);
		if (filer == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	filecl = close(filein);
	if (filecl == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filein), exit(100);
	filecl = close(fileou);
	if (filecl == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileou), exit(100);
	return (0);
}
