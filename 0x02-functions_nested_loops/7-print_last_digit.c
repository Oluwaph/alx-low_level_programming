#include "main.h"

/**
 * print_last_digit - functions that prints last digit of a number
 *
 * @i: function parameter
 *
 * Return: return k, last digit of a number
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -(k);
	_putchar(k + '0');
	return (k);
}
