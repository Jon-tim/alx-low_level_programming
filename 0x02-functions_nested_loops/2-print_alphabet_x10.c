#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 * Return: always return 0
 */

void print_alphabet_x10(void)
{
	int i, b;
	
	for (b = 0; b <= 10; b++)
	{
	
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
