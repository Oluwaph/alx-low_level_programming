#include <stdio.h>

/**
 * main - beginning of program execution
 * prints all possible different combinations of three digits
 *
 * Return: the end of program execution
 */
int main(void)
{
	int n, m, l;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (l = '0'; l <= '9'; l++)
			{
				if (n < m && m < l)
				{
					putchar(n);
					putchar(m);
					putchar(l);

					if (n != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
