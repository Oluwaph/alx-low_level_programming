#include <stdio.h>

/**
 * main - beginning of program execution
 * prints all the numbers of base 16 in lowercase
 * followed by a new line
 *
 * Return: end of program execution
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(char);
	}
	putchar('\n');
	return (0);
}
