#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: end of program
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
