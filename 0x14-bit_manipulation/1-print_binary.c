#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - Prints the binary representation of num.
 * @n: The number to print in binary
 *
 * Return: Nothing
 */
void print_binary(unsigned log int n)
{
	/*Recursive step*/
	if (n > 1)
		/*keep shifting the bits*/
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
