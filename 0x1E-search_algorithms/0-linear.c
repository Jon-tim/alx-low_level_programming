#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the linear search algorithm
 *
 * @array: pointer to the first element of the array
 * to serach in
 *
 * @size: number of elements in the array
 *
 * @value: value to search for
 *
 * Return: first value where index is located
 * if value is not present in array or if array is NULL,
 * return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
	{
		/* code */
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		/* code */
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			/* code */
			return (i);
		}
	}
	return (-1);
}
