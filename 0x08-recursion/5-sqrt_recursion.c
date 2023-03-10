#include "main.h"
/**
 * _sqrt_recursion - calculates the natural square root of a number.
 * power_op - calculates the natural square root of a number
 * @n: input number.
 * @c: iterator.
 * Return: square root or -1.
 */
int power_op(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_op(n, c + 1));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_op(n, 2));
}
