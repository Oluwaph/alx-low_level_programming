#include "main.h"

/**
 * _abs - function that provides absolute value of an integer
 *
 * @x: declared parameter to be checked
 *
 * Return: return x
 */

int _abs(int x)
{
	if (x < 0)
		x = -(x);
	else if (x >= 0)
		x = x;
	return (x);
}
