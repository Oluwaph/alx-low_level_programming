#include <stdio.h>

/**
 * main - this is the startin point for program execution
 *
 * Return: this is the end of program execution
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	
	printf("size of char: %lu byte(s)", sizeof(a));
	printf("size of int: %lu byte(s)", sizeof(b));
	printf("size of a long int: %lu byte(s)", sizeof(c));
	printf("size of long long int: %lu byte(s)", sizeof(d));
	printf("size of float: %lu byte(s)", sizeof(f));
	return (0);
}
