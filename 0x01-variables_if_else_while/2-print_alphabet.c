#include <stdio.h>

/**
 * main - starting point for program execution
 * prints all alphabet in lowercase followed by a new line
 *
 * Return: end of prgram execution
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
