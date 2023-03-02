#include "main.h"
#include <string.h>

/**
 * *_strncat - function that concatenates two strings
 * @dest: destination parameter
 * @src: source parameter
 * @n: bytes from src
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n);
{
	strncat(dest, src, n);
	return (dest);
}
