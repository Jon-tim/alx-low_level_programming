#include <stdio.h>
/**
 * main - print letters but skip e and q
 * Return: always 0
 */

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters  == 'e' || letters == 'q')
			continue;
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
