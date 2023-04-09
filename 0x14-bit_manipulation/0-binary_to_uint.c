#include "main.h"
#include <stddef.h>

/**
 * binary_to_unit - Converts a binary to an unsigned integer.
 * @b: string of 0 and 1 chars.
 *
 * Return: converted integer, otherwise 0
 *
 */

unsigned int binary_to_unit(const char *b)

{
	unsigned int n, x, y;


	n = y = x = 0;
	if (b == NULL)
		return (0);
	while (b[y] != '\0')
	{
		if(b[y] == '0' || b[y] == '1')
			y++;
		else
			return(0);
	}
	
	while (n < 1)
	{
		x = x << 1;
		if (b[n] == '1')
			x += 1;
		n++;
	}
	return (x);
}
