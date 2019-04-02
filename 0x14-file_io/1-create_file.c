#include "holberton.h"
/**
 * create_file - creates a file.
 * @filename: the name of the file to create.
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int in, ou, i;

	if (filename == NULL)
		return (-1);
	in = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (in == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	i = 0;
	while (text_content[i] != '\0')
		i++;
	ou = write(in, text_content, i);
	if (ou == -1)
		return (-1);
	close(in);
	return (1);
}
