#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10
 * Return: Always 0
 */

int main(void)
{
	int _num = 0;

	while (_num < 10)
	{
		putchar(_num);
		_num++;
	}
	putchar('\n');
	return (0);
}
