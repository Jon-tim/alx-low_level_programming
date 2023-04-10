#include "main.h"
/**
 * creatIe_file - function create a file
 * @filename: filename
 * @text_content: content to add
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int iterator = 0, write_fn;

	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[iterator] != '\0')
	{
		iterator++;
	}

	write_fn = write(fd, text_content, iterator);

	if (write_fn == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
