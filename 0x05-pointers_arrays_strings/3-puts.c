#include "main.h"
#include <string.h>
/**
 * _puts - Print a string
 *
 * @str: string to be printed
 *
 * Return: string
 */
void _puts(char *str)
{
	if (strlen(str) != 0)
	{
		int count;

		for (count = 0; count <= strlen(str); count++)
		{
			_putchar(str[count]);
		}

		_putchar('\n');
	}
	else
		_putchar('\n');
}
