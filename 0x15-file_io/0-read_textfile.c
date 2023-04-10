#include "main.h"
/**
 * read_textfile - read text file
 * @filename: filename
 * @letters: number of letters it should read and print
 * Return: if filename is NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fildes;
	ssize_t fn_read, fn_write;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fildes = open(filename, O_RDONLY);

	if (fildes == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	fn_read = read(fildes, buffer, letters);
	fn_write = write(STDOUT_FILENO, buffer, fn_read);
	close(fildes);
	free(buffer);
	return (fn_write);
}
