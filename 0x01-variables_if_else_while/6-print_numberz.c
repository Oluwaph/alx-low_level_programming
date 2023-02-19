#include <stdio.h>

/**
 * main - starting point of program execution
 * prints all single digit numbers of base 10 starting from 0,
 * followed by a new line
 * using putchar function
 *
 * Return: end point of program execution
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
