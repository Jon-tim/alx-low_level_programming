#include "main.h"
/**
 * puts_half - print second half a string
 *
 * @str: string to be evaluated
 *
 * Return: second half of a string
 */

void puts_half(char *str)
{
	int length = 0, index, n;

	while (str[length] != '\0')
		length++;

	if ((length % 2) == 0)
		n = length / 2;
	else
		n = (length - 1) / 2;

	for (index = n; index < length; index++)
		_putchar(str[index]);

	_putchar('\n');
}
