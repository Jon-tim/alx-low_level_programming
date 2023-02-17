#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Write a C program that prints the size of various types on the computer it is compiled and run on.
 *
 * Return: return value should be 0
 */
int main(void)
{
	printf("Size of a char: %n byte(s)\n", sizeof(char));
	printf("Size of an int: %n byte(s)\n", sizeof(int));
	printf("Size of a long int: %n byte(s)\n", sizeof(long int));
	printf("Size of a long long: %n byte(s)\n", sizeof(long long));
	printf("Size of a float: %n byte(s)\n", sizeof(float));
	return (0);
}
