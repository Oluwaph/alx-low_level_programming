#include <stdio.h>

/**
 * main - starting point of program execution
 * prints all possible different combinations of two digits
 *
 * Return: end point of program execution
 */
int main(void)
{
	int n, m;

	for (m = 48; m <= 56; m++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m < n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
