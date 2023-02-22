#include "main.h"

/**
 * main - beginning of program execution
 * prints alphabet in lowercase with _putchar function
 *
 * Return: end of program execution
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
