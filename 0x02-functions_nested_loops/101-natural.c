#include <stdio.h>

/**
 * main - start of program execution
 * program that computes and prints the sum of all the multiples of 3 or 5
 *
 * Return: end of program execution, return 0
 */

int main(void)
{
	int i;
	int sum;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
