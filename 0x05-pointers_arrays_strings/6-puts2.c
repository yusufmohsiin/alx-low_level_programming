#include "main.h"

/**
 * puts2 - prints 1 character out of 2 string.
 *@str: the string to print.
 */

void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
		x++;
	}
	_putchar('\n');
}
