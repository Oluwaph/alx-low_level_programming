#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: parameter to put functio
 *
 * Return: end of program
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
