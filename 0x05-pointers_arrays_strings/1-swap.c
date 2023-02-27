#include "main.h"

/**
 * swap_int - swap the values of two integers
 *
 *@a: integer to be evaluated
 *@b: integer to be evaluated
 *
 *Return: swapped values
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
