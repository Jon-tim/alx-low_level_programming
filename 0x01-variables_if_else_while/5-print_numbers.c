#include <stdio.h>
/**
 * main - Print all single digit number of base 10
 * Return always 0
 */

int main(void)
{
	int base_10;

	for (base_10 = 0; base_10 < 10; base_10++)
	{
		printf("%d", base_10);
	}
	putchar('\n');
	return (0);
}
