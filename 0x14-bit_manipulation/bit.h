#ifndef BIT
#define BIT

/*HEADERS*/
#include <stdio.h>
#include <unistd.h>

/*FUNCTIONS*/
int get_endianness(void);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int clear_bit(unsigned long int *n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
int _putchar(char c);
int main(void);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
#endif /*BIT*/
