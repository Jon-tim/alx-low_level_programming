#include "search_algos.h"
/**
 * interpolation_search - searches for a value in an array of integers
 * using the Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search in
 *
 * @size: number of elements in array
 *
 * @value: value to search for
 *
 * Return: first index where value is located, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l, h, p;

	if (!array)
	{
		return (-1);
	}

	for (l = 0, h = size - 1; h >= l;)
	{
		/* code */
		p = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (p < size)
		{
			/* code */
			printf("Value checked array[%lu] = [%d]\n", p, array[p]);
		}
		else
		{
			printf("Value checked array[%lu] is out of range\n", p);
			break;
		}

		if (value == array[p])
		{
			return (p);
		}

		if (array[p] < value)
		{
			l = p + 1;
		}
		else
		{
			h = p - 1;
		}
	}

	return (-1);
}
