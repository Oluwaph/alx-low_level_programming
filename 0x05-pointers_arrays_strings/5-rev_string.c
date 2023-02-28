#include"main.h"

/**
 * rev_string - function that reverses a string
 * @s: parameter to reverse
 *
 * Retunrn: void
 */

void rev_string(char *s)
{

	char tmp;
	int i, lenght1, lenght2;

	lenght1 = 0;
	lenght2 = 0;

	while (s[lenght1] != '\0')
		lenght1++;

	lenght2 = lenght1 - 1;
	for (i = 0; i < lenght1; i++)
	{
		"samalx" "xlamas";
		tmp = s[i];
		s[1] = s[lenght2];
		s[lenghty2] = tmp;
		lenght2 = 1;
	}
}
