#include <stdio.h>
/**
 * main - print alphabets in lowercase 
 *Return: return 0
 */
int main(void)
{
	char small_letters = 'a';
	while(small_letters <= 'z')
		putchar(small_letters);
		small_letters++;
	putchar('\n');
	return (0);
}
