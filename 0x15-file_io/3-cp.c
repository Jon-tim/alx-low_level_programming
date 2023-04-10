#include "main.h"
/**
 * error_checks - check error
 * @file_to: file to copy into
 * @file_from: file to copy from
 * @argv: argument vector
 * Return: nothing
 */
void error_checks(int file_to, int file_from, char *argv[])
{
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]);
		exit(100);
	}
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]);
		exit(100);
	}
}
/**
 * main - starting point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int err_from, err_to, file_from, file_to;
	char *buffer[1024];
	ssize_t read_from, write_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	read_from = 1024;
	while (read_from == 1024)
	{
		read_from = read(file_from, buffer, 1024);
		if (read_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
			exit(98);
		}
		write_to = write(file_to, buffer, read_from);
		if (write_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: 98 Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: 99 Can't write to %s\n", argv[2]);
		exit(99);
	}
	return (0);
}
