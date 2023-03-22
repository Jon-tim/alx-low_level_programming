#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as
 * a parameter on each element of an array
 * @array: array which element is to be printed
 * @size: size of the array
 * @action: a pointer to the function to use
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
