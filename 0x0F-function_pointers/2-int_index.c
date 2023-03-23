#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array which element is to be evaluated
 * @size: size of the array
 * @cmp: function to be used for comparison
 * Return: -1 is size <= 0 or if no element matches or index of
 * matching element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
