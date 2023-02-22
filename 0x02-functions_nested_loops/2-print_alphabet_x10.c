#include "main.h"

/**
 * print_alphabet_x10 - prints 10x the alphabet in lowercase
 *
 * Return: end of program execution
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}
