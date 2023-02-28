#include "main.h"
#include <string.h>
/**
 * puts2 - print every other number
 *
 * @str: string to be evaluated
 *
 * Return: every other number
 */

void puts2(char *str)
{
	int count;

	for (count = 0; count < strlen(str); count = count + 2)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
