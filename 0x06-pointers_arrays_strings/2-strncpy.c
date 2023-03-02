#include "main.h"
#include <string.h>

/**
 * *_strncpy - function that copies a string
 * @dest: destination parameter
 * @src: source parameter
 * @n: n parameter
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strcpy(dest, src, n);
	return (dest);
}
