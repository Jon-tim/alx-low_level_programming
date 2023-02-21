#include "main.h"
/**
 * main - starting point
 * Description: Write a function that prints the alphabet, in lowercase.
 * Return: return 0
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
