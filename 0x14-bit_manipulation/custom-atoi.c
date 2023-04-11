#include "main.h"
/**
 * my_atoi - custom atoi
 * @str: take string to turn to digits
 * Return: num*sign
 */

int my_atoi(const char *str)
{
	int sign = 1, digit, int num = 0, i = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		digit = str[i] - '0';
		if (digit < 0 || digit > 9)
		{
			break;
		}
		num = num * 10 + digit;
		i++;
	}
	return num * sign;
}
