#include "bit.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: binary number
 * Return: converted number or 0 if b == NULL or b contains chars not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int base, i, a;
	unsigned int decimal;

	base = 1;
	decimal = a = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[a] != '\0')
	{
		/* code */
		a++;
	}
	for (a--; a >= 0; a--)
	{
		if (b[a] != '1' && b[a] != '0')
		{
			return (0);
		}
		/* code */
		if (b[a] == '1')
		{
			/* code */
			decimal += base;
		}
		base *= 2;
	}

	return (decimal);
}

