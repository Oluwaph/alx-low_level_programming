#include <stdio.h>
/**
 * main - starting point of program execution
 * prints alphabet in lower case except q and e
 *
 * Return: end of program execution
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
