#include "search_algos.h"
/**
 * jump_search - searches for a value
 * in a sorted array of integers using
 * the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located or -1 if value is not found
 */
int jump_search(int *array, size_t size, int value)
{
	int block = sqrt(size), prv = 0, nxt = 0;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	for (nxt = 0; nxt < (int)size && array[nxt] < value; prv = nxt, nxt += block)
	{
		printf("Value checked array[%d] = [%d]\n", nxt, array[nxt]);
	}

	printf("Value found between indexes [%d] and [%d]\n", prv, nxt);

	for (; prv <= min(nxt, size - 1); prv++)
	{
		printf("Value checked array[%d] = [%d]\n", prv, array[prv]);

		if (array[prv] == value)
		{
			return (prv);
		}
	}

	return (-1);
}

/**
 * min - returns the minimum of two integers
 * @value1: first integer
 * @value2: second integer
 *
 * Return: the minimum of the two integers
 */
int min(int value1, int value2)
{
	return (value1 < value2 ? value1 : value2);
}
