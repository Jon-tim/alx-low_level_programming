#include <stdio.h>
/**
 * main - possible combinations of two two-digit numbers
 * Return: always 0
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 9; num2)
		{
			if (num1 < num2)
			{
				putchar(num1 + '0');
				putchar(num1 + '0');
				putchar(' ');
				putchar(num2 + '0');
				putchar(num2 + '0');
				if (num1 == 98 && num2 == 99)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
