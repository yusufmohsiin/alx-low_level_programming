#include "main.h"
#include <string.h>

/**
 * puts_half - Prints half of a string
 * @str: string to print
**/

void puts_half(char *str)
{
	int h, len = strlen(str);

	if (len % 2 != 0)
	{
		len = len / 2 + 1;
	}
	else
	{
		len /= 2;
	}

	for (h = len; str[h] != '\0'; h++)
	{
		_putchar(str[h]);
	}

	_putchar('\n');
}
