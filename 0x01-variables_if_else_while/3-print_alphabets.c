#include <stdio.h>
/**
 * main - start point for program execution
 * prints alphabet in lowercase and the in uppercase
 *
 * Return: end of program execution
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
