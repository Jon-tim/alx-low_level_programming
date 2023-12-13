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
	size_t l = 0, h = size - 1, p;

	if (!array)
	{
		return (-1);
	}

	while ((array[h] != array[l]) && (value >= array[l]) && (value <= array[h]))
	{
		/* code */
		p = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		printf("Value checked array[%lu] = [%d]\n", p, array[p]);
		if (array[p] < value)
		{
			l = p + 1;
		}
		else if (array[p] > value)
		{
			h = p - 1;
		}
		else
		{
			return (p);
		}
	}

	if (value == array[l])
	{
		return (l);
	}
	printf("Value checked array[%lu] is out of range\n", l);

	return (-1);
}
