nclude "search_algos.h"
/**
 * exponential_search - searches for a value in a sorted array of integers
 *
 * @array: pointer to the first element of the array to search in
 *
 * @size: number of elements in array
 *
 * @value: value to search for
 *
 * Return: index where value is located
 * -1 if value is not present or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, j = 0;

	if (size == 0)
	{
		return (-1);
	}
	if (array[0] != value)
	{
		i = 1;
		while (i < size && array[i] <= value)
		{
			/* code */
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			i *= 2;
		}
	}
	if (i < size)
	{
		j = i;
	}
	else
	{
		j = size - 1;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, j);
	return (bin_search(array, i / 2, j, value));
}

/**
 * bin_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 *
 * @low: index of the first element of the array
 * @high: index of the last element of the array
 * @value: value to search for
 *
 * Return: index where value is located
 * or -1 if value is not present or array is NULL
 */

int bin_search(int *array, size_t low, size_t high, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		i = low + (high - low) / 2;

		if (array[i] == value)
		{
			return (i);
		}

		if (array[i] > value)
		{
			high = i - 1;
		}
		else
			low = i + 1;
	}
	return (-1);
}
