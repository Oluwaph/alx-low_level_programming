#include <stdio.h>

/**
 * main - start of program execution
 *
 * Return: 0
 */

int main(void)
{
	int n, a[5], *p;

	a[2] = 1024;
	p = &n;
	(p + 5) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
