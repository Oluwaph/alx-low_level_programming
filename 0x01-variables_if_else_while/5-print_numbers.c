#include <stdio.h>

/**
 * main - beginning of program execution
 * single digit numbers of base 10 starting from 0, followed by a new line
 *
 * Return: end of program execution
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
