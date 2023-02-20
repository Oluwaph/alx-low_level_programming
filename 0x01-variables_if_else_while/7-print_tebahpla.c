#include <stdio.h>

/**
 * main - starting point of program execution
 * prints alphabet a-z in the reverse order
 *
 * Return: end point of program execution
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
