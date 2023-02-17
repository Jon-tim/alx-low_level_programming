#include <stdio.h>

/**
 * main - create lower and upper case
 *Return: always 0
 */

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; ++letters)
	{
		putchar(letters);
	}
	for (letters = 'A'; letters <= 'Z'; ++letters)
	{
		putchar(letters);
	}
	putchar('$');
	return (0);
}
