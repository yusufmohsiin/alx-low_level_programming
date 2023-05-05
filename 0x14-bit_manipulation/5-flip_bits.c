#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Returns the number of bits you would need to flip to get.
 * from one number to another.
 * @n: The first num.
 * @m: The second num.
 *
 * Return: The number of bits that differ num to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/*XOR operation to get the different bits*/
	unsigned long int i = n ^ m;
	/*number of bits*/
	unsigned int j = 0;

	while (i != 0)
	{
		if (i & 1)
			j++;
		i >>= 1; /*keep shifting by 1 bit*/
	}
	return (j);
}
