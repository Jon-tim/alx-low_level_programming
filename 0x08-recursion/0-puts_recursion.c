#include "main.h"
/**
 * _puts_recursion - print a string, followed by a new line
 * @s: string to be printed
 * Return: string
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		_putchar('\n');
		return;
	else
		_putchar(s[i]);
	_puts_recursion(s + 1);
}
