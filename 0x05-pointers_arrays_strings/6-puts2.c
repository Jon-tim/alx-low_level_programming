#include "main.h"
/**
 * puts2 - print every other number
 *
 * @str: string to be evaluated
 *
 * Return: every other number
 */

void puts2(char *str)
{
	int count, index = 0, len = 0;

	while (str[index] != 0)
	{
		len++;
		index++;
	}

	for (count = 0; count < len; count += 2)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
