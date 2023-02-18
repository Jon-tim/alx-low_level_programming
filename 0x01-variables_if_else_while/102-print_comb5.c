#include <stdio.h>
/**
 * main - possible combinations of two two-digit numbers
 * Return: always 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			int n1 = i + '0';
			int n2 = i + '0';
			int n3 = j + '0';
			int n4 = j + '0';
			putchar(n1 + '0');
			putchar(n2 + '0');
			putchar(' ');
			putchar(n3 + '0');
			putchar(n4 + '0');
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
