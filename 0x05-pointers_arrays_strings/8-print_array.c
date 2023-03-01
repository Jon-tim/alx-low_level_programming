#include "main.h"
#include <stdio.h>
/**
 * print_array - print array elements
 *
 * @n: number of element in the array
 * @a: array
 *
 * Return: array elements
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);

		if (count == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
