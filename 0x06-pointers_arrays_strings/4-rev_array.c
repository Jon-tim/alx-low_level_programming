#include "main.h"
/**
 * reverse_array - reverse content of an array of integer
 * @a: array
 * @n: number of elements of the array
 * Return: a reversed array
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = 0, temp;

	for (i = 0; i < n; i++)
	{
		for (j = n; j > 0; j--)
		{
			temp = a[j];
			a[j] = a[j - 1];
			a[j - 1] = temp;
		}
	}
}
