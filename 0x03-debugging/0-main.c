#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* positive_or_negative - Check if a number is Positive or Negatiive
* @i: number to be checked
* Return: always return 0
*/
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (i > 0)
	{
		/* if the number is greater than 0: is positive */
		printf("%d is positive\n", i);
	} else if (i == 0)
	{
		/* if the number is 0: is zero */
		printf("%d is zero\n", i);
	} else
	{
		/* if the number is less than 0: is negative */
		printf("%d is negative\n", i);
	}
	return (0);
}
