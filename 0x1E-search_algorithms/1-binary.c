#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 *
 * @size: number of elements in array
 *
 * @value: value to search for
 *
 * Return: index where value is located
 * or -1 if value is not present or array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int low, mid, high;
	size_t i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	for (low = 0, high = size - 1; low <= high;)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= (size_t)high; i++)
		{
			printf("%d", array[i]);
			if (i < (size_t)high)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
