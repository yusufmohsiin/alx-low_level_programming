#include <stdio.h>
#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 *
 * @n: the number to get the bit from.
 * @index: index of the bit to get.
 *
 * Return: value of the bit at index index otherwise, -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*Checks if the given index is valid*/
	if (index >= sizeof(unsigned long int) * 8) /*This is the range*/
		return (-1); /*index out of range? return -1*/

	return ((n >> index) & 1);
}
