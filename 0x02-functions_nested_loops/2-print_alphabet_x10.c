#include "main.h"

/**
 * Program idea: print alphabets in lowercase ten times
 *
 *
 * Return : void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char l;

	while (i < 10) 
	{

		l = 'a';
		while ( l <= 'z')
		{

			_putchar(l);
			l++;

		}
		_putchar('\n');

		i++;
	}
}
